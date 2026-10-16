#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1E00
// Address: 0x2a1e00 - 0x2a2b30
void sub_002A1E00_0x2a1e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1E00_0x2a1e00");
#endif

    switch (ctx->pc) {
        case 0x2a1e20u: goto label_2a1e20;
        case 0x2a1e40u: goto label_2a1e40;
        case 0x2a1e94u: goto label_2a1e94;
        case 0x2a1e9cu: goto label_2a1e9c;
        case 0x2a1f0cu: goto label_2a1f0c;
        case 0x2a1f20u: goto label_2a1f20;
        case 0x2a1f38u: goto label_2a1f38;
        case 0x2a1f54u: goto label_2a1f54;
        case 0x2a1f88u: goto label_2a1f88;
        case 0x2a1f98u: goto label_2a1f98;
        case 0x2a1fb0u: goto label_2a1fb0;
        case 0x2a1fdcu: goto label_2a1fdc;
        case 0x2a200cu: goto label_2a200c;
        case 0x2a201cu: goto label_2a201c;
        case 0x2a2028u: goto label_2a2028;
        case 0x2a2038u: goto label_2a2038;
        case 0x2a2074u: goto label_2a2074;
        case 0x2a2084u: goto label_2a2084;
        case 0x2a2098u: goto label_2a2098;
        case 0x2a20a4u: goto label_2a20a4;
        case 0x2a20ecu: goto label_2a20ec;
        case 0x2a20f8u: goto label_2a20f8;
        case 0x2a2100u: goto label_2a2100;
        case 0x2a2108u: goto label_2a2108;
        case 0x2a2118u: goto label_2a2118;
        case 0x2a2124u: goto label_2a2124;
        case 0x2a2130u: goto label_2a2130;
        case 0x2a213cu: goto label_2a213c;
        case 0x2a2158u: goto label_2a2158;
        case 0x2a2170u: goto label_2a2170;
        case 0x2a217cu: goto label_2a217c;
        case 0x2a21c4u: goto label_2a21c4;
        case 0x2a21d0u: goto label_2a21d0;
        case 0x2a21e4u: goto label_2a21e4;
        case 0x2a21f0u: goto label_2a21f0;
        case 0x2a21fcu: goto label_2a21fc;
        case 0x2a2208u: goto label_2a2208;
        case 0x2a2230u: goto label_2a2230;
        case 0x2a223cu: goto label_2a223c;
        case 0x2a2254u: goto label_2a2254;
        case 0x2a2260u: goto label_2a2260;
        case 0x2a2268u: goto label_2a2268;
        case 0x2a22f0u: goto label_2a22f0;
        case 0x2a22fcu: goto label_2a22fc;
        case 0x2a2318u: goto label_2a2318;
        case 0x2a2328u: goto label_2a2328;
        case 0x2a2338u: goto label_2a2338;
        case 0x2a234cu: goto label_2a234c;
        case 0x2a2354u: goto label_2a2354;
        case 0x2a2360u: goto label_2a2360;
        case 0x2a236cu: goto label_2a236c;
        case 0x2a2378u: goto label_2a2378;
        case 0x2a239cu: goto label_2a239c;
        case 0x2a23acu: goto label_2a23ac;
        case 0x2a23c0u: goto label_2a23c0;
        case 0x2a23ecu: goto label_2a23ec;
        case 0x2a24bcu: goto label_2a24bc;
        case 0x2a24d4u: goto label_2a24d4;
        case 0x2a2538u: goto label_2a2538;
        case 0x2a254cu: goto label_2a254c;
        case 0x2a256cu: goto label_2a256c;
        case 0x2a257cu: goto label_2a257c;
        case 0x2a258cu: goto label_2a258c;
        case 0x2a25a4u: goto label_2a25a4;
        case 0x2a2638u: goto label_2a2638;
        case 0x2a26acu: goto label_2a26ac;
        case 0x2a26c0u: goto label_2a26c0;
        case 0x2a26d8u: goto label_2a26d8;
        case 0x2a26f4u: goto label_2a26f4;
        case 0x2a2710u: goto label_2a2710;
        case 0x2a274cu: goto label_2a274c;
        case 0x2a275cu: goto label_2a275c;
        case 0x2a27a0u: goto label_2a27a0;
        case 0x2a27b8u: goto label_2a27b8;
        case 0x2a27c8u: goto label_2a27c8;
        case 0x2a27d8u: goto label_2a27d8;
        case 0x2a27e4u: goto label_2a27e4;
        case 0x2a2800u: goto label_2a2800;
        case 0x2a2810u: goto label_2a2810;
        case 0x2a2834u: goto label_2a2834;
        case 0x2a284cu: goto label_2a284c;
        case 0x2a2860u: goto label_2a2860;
        case 0x2a2874u: goto label_2a2874;
        case 0x2a2884u: goto label_2a2884;
        case 0x2a2898u: goto label_2a2898;
        case 0x2a28b4u: goto label_2a28b4;
        case 0x2a292cu: goto label_2a292c;
        case 0x2a293cu: goto label_2a293c;
        case 0x2a29b8u: goto label_2a29b8;
        case 0x2a29ccu: goto label_2a29cc;
        case 0x2a29dcu: goto label_2a29dc;
        case 0x2a2a00u: goto label_2a2a00;
        case 0x2a2a10u: goto label_2a2a10;
        case 0x2a2a40u: goto label_2a2a40;
        case 0x2a2a80u: goto label_2a2a80;
        case 0x2a2aa8u: goto label_2a2aa8;
        case 0x2a2ab0u: goto label_2a2ab0;
        case 0x2a2ad4u: goto label_2a2ad4;
        case 0x2a2adcu: goto label_2a2adc;
        case 0x2a2ae4u: goto label_2a2ae4;
        case 0x2a2b00u: goto label_2a2b00;
        default: break;
    }

    ctx->pc = 0x2a1e00u;

    // 0x2a1e00: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2a1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a1e04: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2a1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2a1e08: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2a1e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a1e0c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2a1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2a1e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1e14: 0xafb30160  sw          $s3, 0x160($sp)
    ctx->pc = 0x2a1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
    // 0x2a1e18: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x2a1e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2a1e1c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x2a1e1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_2a1e20:
    // 0x2a1e20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1e24: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x2a1e24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x2a1e28: 0xae227bf4  sw          $v0, 0x7BF4($s1)
    ctx->pc = 0x2a1e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x707BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x707BF4u, _value); } while (0);
    // 0x2a1e2c: 0x2e620034  sltiu       $v0, $s3, 0x34
    ctx->pc = 0x2a1e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x2a1e30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1E30u;
    {
        const bool branch_taken_0x2a1e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E30u;
        // 0x2a1e34: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e30) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1E38u;
    // 0x2a1e38: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2a1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a1e3c: 0x2c92000f  sltiu       $s2, $a0, 0xF
    ctx->pc = 0x2a1e3cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_2a1e40:
    // 0x2a1e40: 0x8e237bf4  lw          $v1, 0x7BF4($s1)
    ctx->pc = 0x2a1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31732)));
    // 0x2a1e44: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2a1e44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2a1e48: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x2a1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2a1e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a1e50: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2a1e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a1e54: 0xae237bf4  sw          $v1, 0x7BF4($s1)
    ctx->pc = 0x2a1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31732), GPR_U32(ctx, 3));
    // 0x2a1e58: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A1E58u;
    {
        const bool branch_taken_0x2a1e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e58) {
            ctx->pc = 0x2A1E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1e40;
        }
    }
    ctx->pc = 0x2A1E60u;
    // 0x2a1e60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1E60u;
    {
        const bool branch_taken_0x2a1e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E60u;
        // 0x2a1e64: 0x8ea42c90  lw          $a0, 0x2C90($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e60) {
            ctx->pc = 0x2A1E74u;
            goto label_2a1e74;
        }
    }
    ctx->pc = 0x2A1E68u;
label_2a1e68:
    // 0x2a1e68: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a1e6c: 0x2c52000f  sltiu       $s2, $v0, 0xF
    ctx->pc = 0x2a1e6cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2a1e70: 0x8ea42c90  lw          $a0, 0x2C90($s5)
    ctx->pc = 0x2a1e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11408)));
label_2a1e74:
    // 0x2a1e74: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1E74u;
    {
        const bool branch_taken_0x2a1e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E74u;
        // 0x2a1e78: 0x8e237bf4  lw          $v1, 0x7BF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e74) {
            ctx->pc = 0x2A1E8Cu;
            goto label_2a1e8c;
        }
    }
    ctx->pc = 0x2A1E7Cu;
    // 0x2a1e7c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a1e80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a1e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1e84: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1E84u;
    {
        const bool branch_taken_0x2a1e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e84) {
            ctx->pc = 0x2A1E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1E84u;
            // 0x2a1e88: 0x8eb52c90  lw          $s5, 0x2C90($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1EA8u;
            goto label_2a1ea8;
        }
    }
    ctx->pc = 0x2A1E8Cu;
label_2a1e8c:
    // 0x2a1e8c: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E94u);
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A1E8Cu, 0x2A1E94u)) {
        return;
    }
    ctx->pc = 0x2A1E94u;
label_2a1e94:
    // 0x2a1e94: 0xc0a7e40  jal         func_29F900
    ctx->pc = 0x2A1E94u;
    SET_GPR_U32(ctx, 31, 0x2A1E9Cu);
    ctx->pc = 0x2A1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E94u;
    // 0x2a1e98: 0x8e247bf4  lw          $a0, 0x7BF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F900u, 0x2A1E94u, 0x2A1E9Cu)) {
        return;
    }
    ctx->pc = 0x2A1E9Cu;
label_2a1e9c:
    // 0x2a1e9c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2a1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2a1ea0: 0xac622c90  sw          $v0, 0x2C90($v1)
    ctx->pc = 0x2a1ea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x682C90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x682C90u, _value); } while (0);
    // 0x2a1ea4: 0x8eb52c90  lw          $s5, 0x2C90($s5)
    ctx->pc = 0x2a1ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11408)));
label_2a1ea8:
    // 0x2a1ea8: 0x124000fd  beqz        $s2, . + 4 + (0xFD << 2)
    ctx->pc = 0x2A1EA8u;
    {
        const bool branch_taken_0x2a1ea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EA8u;
        // 0x2a1eac: 0xafb501a0  sw          $s5, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ea8) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A1EB0u;
    // 0x2a1eb0: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a1eb4: 0x108000fa  beqz        $a0, . + 4 + (0xFA << 2)
    ctx->pc = 0x2A1EB4u;
    {
        const bool branch_taken_0x2a1eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EB4u;
        // 0x2a1eb8: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1eb4) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A1EBCu;
    // 0x2a1ebc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2a1ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1ec0: 0xffb40198  sd          $s4, 0x198($sp)
    ctx->pc = 0x2a1ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 20));
    // 0x2a1ec4: 0xafb6016c  sw          $s6, 0x16C($sp)
    ctx->pc = 0x2a1ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 22));
    // 0x2a1ec8: 0x1ac00024  blez        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A1EC8u;
    {
        const bool branch_taken_0x2a1ec8 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x2A1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EC8u;
        // 0x2a1ecc: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ec8) {
            ctx->pc = 0x2A1F5Cu;
            goto label_2a1f5c;
        }
    }
    ctx->pc = 0x2A1ED0u;
    // 0x2a1ed0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a1ed4: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x2a1ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x2a1ed8: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x2a1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
    // 0x2a1edc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1ee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1ee4: 0x168103  sra         $s0, $s6, 4
    ctx->pc = 0x2a1ee4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 22), 4));
    // 0x2a1ee8: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x2a1ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x2a1eec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1EECu;
    {
        const bool branch_taken_0x2a1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EECu;
        // 0x2a1ef0: 0xdc710000  ld          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1eec) {
            ctx->pc = 0x2A1F10u;
            goto label_2a1f10;
        }
    }
    ctx->pc = 0x2A1EF4u;
    // 0x2a1ef4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a1ef8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1efc: 0xdc45e068  ld          $a1, -0x1F98($v0)
    ctx->pc = 0x2a1efcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AE068u));
    // 0x2a1f00: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2a1f00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2a1f04: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2A1F04u;
    SET_GPR_U32(ctx, 31, 0x2A1F0Cu);
    ctx->pc = 0x2A1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F04u;
    // 0x2a1f08: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2A1F04u, 0x2A1F0Cu)) {
        return;
    }
    ctx->pc = 0x2A1F0Cu;
label_2a1f0c:
    // 0x2a1f0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a1f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f10:
    // 0x2a1f10: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1F10u;
    {
        const bool branch_taken_0x2a1f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F10u;
        // 0x2a1f14: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f10) {
            ctx->pc = 0x2A1F48u;
            goto label_2a1f48;
        }
    }
    ctx->pc = 0x2A1F18u;
    // 0x2a1f18: 0x2452e048  addiu       $s2, $v0, -0x1FB8
    ctx->pc = 0x2a1f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959176));
    // 0x2a1f1c: 0x0  nop
    ctx->pc = 0x2a1f1cu;
    // NOP
label_2a1f20:
    // 0x2a1f20: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2a1f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a1f24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1F24u;
    {
        const bool branch_taken_0x2a1f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F24u;
        // 0x2a1f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f24) {
            ctx->pc = 0x2A1F3Cu;
            goto label_2a1f3c;
        }
    }
    ctx->pc = 0x2A1F2Cu;
    // 0x2a1f2c: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x2a1f2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a1f30: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A1F30u;
    SET_GPR_U32(ctx, 31, 0x2A1F38u);
    ctx->pc = 0x2A1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F30u;
    // 0x2a1f34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A1F30u, 0x2A1F38u)) {
        return;
    }
    ctx->pc = 0x2A1F38u;
label_2a1f38:
    // 0x2a1f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a1f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f3c:
    // 0x2a1f3c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2a1f3cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2a1f40: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A1F40u;
    {
        const bool branch_taken_0x2a1f40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F40u;
        // 0x2a1f44: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f40) {
            ctx->pc = 0x2A1F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1f20;
        }
    }
    ctx->pc = 0x2A1F48u;
label_2a1f48:
    // 0x2a1f48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f4c: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2A1F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F54u);
    ctx->pc = 0x2A1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F4Cu;
    // 0x2a1f50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2A1F4Cu, 0x2A1F54u)) {
        return;
    }
    ctx->pc = 0x2A1F54u;
label_2a1f54:
    // 0x2a1f54: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A1F54u;
    {
        const bool branch_taken_0x2a1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F54u;
        // 0x2a1f58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f54) {
            ctx->pc = 0x2A1FC0u;
            goto label_2a1fc0;
        }
    }
    ctx->pc = 0x2A1F5Cu;
label_2a1f5c:
    // 0x2a1f5c: 0x168823  negu        $s1, $s6
    ctx->pc = 0x2a1f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x2a1f60: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A1F60u;
    {
        const bool branch_taken_0x2a1f60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F60u;
        // 0x2a1f64: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f60) {
            ctx->pc = 0x2A1FC0u;
            goto label_2a1fc0;
        }
    }
    ctx->pc = 0x2A1F68u;
    // 0x2a1f68: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x2a1f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x2a1f6c: 0x2463df90  addiu       $v1, $v1, -0x2070
    ctx->pc = 0x2a1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958992));
    // 0x2a1f70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a1f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1f78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f7c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2a1f7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1f80: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A1F80u;
    SET_GPR_U32(ctx, 31, 0x2A1F88u);
    ctx->pc = 0x2A1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F80u;
    // 0x2a1f84: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A1F80u, 0x2A1F88u)) {
        return;
    }
    ctx->pc = 0x2A1F88u;
label_2a1f88:
    // 0x2a1f88: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1F88u;
    {
        const bool branch_taken_0x2a1f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F88u;
        // 0x2a1f8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f88) {
            ctx->pc = 0x2A1FC0u;
            goto label_2a1fc0;
        }
    }
    ctx->pc = 0x2A1F90u;
    // 0x2a1f90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a1f94: 0x2451e048  addiu       $s1, $v0, -0x1FB8
    ctx->pc = 0x2a1f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959176));
label_2a1f98:
    // 0x2a1f98: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2a1f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a1f9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1F9Cu;
    {
        const bool branch_taken_0x2a1f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F9Cu;
        // 0x2a1fa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f9c) {
            ctx->pc = 0x2A1FB4u;
            goto label_2a1fb4;
        }
    }
    ctx->pc = 0x2A1FA4u;
    // 0x2a1fa4: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x2a1fa4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a1fa8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A1FA8u;
    SET_GPR_U32(ctx, 31, 0x2A1FB0u);
    ctx->pc = 0x2A1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FA8u;
    // 0x2a1fac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A1FA8u, 0x2A1FB0u)) {
        return;
    }
    ctx->pc = 0x2A1FB0u;
label_2a1fb0:
    // 0x2a1fb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a1fb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1fb4:
    // 0x2a1fb4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2a1fb4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2a1fb8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A1FB8u;
    {
        const bool branch_taken_0x2a1fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FB8u;
        // 0x2a1fbc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fb8) {
            ctx->pc = 0x2A1F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1f98;
        }
    }
    ctx->pc = 0x2A1FC0u;
label_2a1fc0:
    // 0x2a1fc0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2a1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a1fc4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A1FC4u;
    {
        const bool branch_taken_0x2a1fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1fc4) {
            ctx->pc = 0x2A2014u;
            goto label_2a2014;
        }
    }
    ctx->pc = 0x2A1FCCu;
    // 0x2a1fcc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2a1fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2a1fd0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a1fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a1fd4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A1FD4u;
    SET_GPR_U32(ctx, 31, 0x2A1FDCu);
    ctx->pc = 0x2A1FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FD4u;
    // 0x2a1fd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A1FD4u, 0x2A1FDCu)) {
        return;
    }
    ctx->pc = 0x2A1FDCu;
label_2a1fdc:
    // 0x2a1fdc: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1FDCu;
    {
        const bool branch_taken_0x2a1fdc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2a1fdc) {
            ctx->pc = 0x2A2014u;
            goto label_2a2014;
        }
    }
    ctx->pc = 0x2A1FE4u;
    // 0x2a1fe4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2a1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a1fe8: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A1FE8u;
    {
        const bool branch_taken_0x2a1fe8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FE8u;
        // 0x2a1fec: 0x8fa20168  lw          $v0, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fe8) {
            ctx->pc = 0x2A2014u;
            goto label_2a2014;
        }
    }
    ctx->pc = 0x2A1FF0u;
    // 0x2a1ff0: 0x184000a6  blez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2A1FF0u;
    {
        const bool branch_taken_0x2a1ff0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FF0u;
        // 0x2a1ff4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ff0) {
            ctx->pc = 0x2A228Cu;
            goto label_2a228c;
        }
    }
    ctx->pc = 0x2A1FF8u;
    // 0x2a1ff8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2a1ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2a1ffc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a1ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a2000: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2a2000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2a2004: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A2004u;
    SET_GPR_U32(ctx, 31, 0x2A200Cu);
    ctx->pc = 0x2A2008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2004u;
    // 0x2a2008: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A2004u, 0x2A200Cu)) {
        return;
    }
    ctx->pc = 0x2A200Cu;
label_2a200c:
    // 0x2a200c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a200cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a2010: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a2010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2014:
    // 0x2a2014: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A2014u;
    SET_GPR_U32(ctx, 31, 0x2A201Cu);
    ctx->pc = 0x2A2018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2014u;
    // 0x2a2018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A2014u, 0x2A201Cu)) {
        return;
    }
    ctx->pc = 0x2A201Cu;
label_2a201c:
    // 0x2a201c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2020: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A2020u;
    SET_GPR_U32(ctx, 31, 0x2A2028u);
    ctx->pc = 0x2A2024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2020u;
    // 0x2a2024: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A2020u, 0x2A2028u)) {
        return;
    }
    ctx->pc = 0x2A2028u;
label_2a2028:
    // 0x2a2028: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x2a2028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x2a202c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a202cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a2030: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A2030u;
    SET_GPR_U32(ctx, 31, 0x2A2038u);
    ctx->pc = 0x2A2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2030u;
    // 0x2a2034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A2030u, 0x2A2038u)) {
        return;
    }
    ctx->pc = 0x2A2038u;
label_2a2038:
    // 0x2a2038: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x2a2038u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a203c: 0x3c05fcc0  lui         $a1, 0xFCC0
    ctx->pc = 0x2a203cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64704 << 16));
    // 0x2a2040: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a2040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a2044: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a2044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a2048: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a2048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a204c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a204cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a2050: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a2050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a2054: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x2a2054u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a2058: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2a2058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a205c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A205Cu;
    {
        const bool branch_taken_0x2a205c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A205Cu;
        // 0x2a2060: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a205c) {
            ctx->pc = 0x2A20B4u;
            goto label_2a20b4;
        }
    }
    ctx->pc = 0x2A2064u;
    // 0x2a2064: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x2a2064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2a2068: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a2068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a206c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A206Cu;
    SET_GPR_U32(ctx, 31, 0x2A2074u);
    ctx->pc = 0x2A2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A206Cu;
    // 0x2a2070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A206Cu, 0x2A2074u)) {
        return;
    }
    ctx->pc = 0x2A2074u;
label_2a2074:
    // 0x2a2074: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a2074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a2078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a207c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A207Cu;
    SET_GPR_U32(ctx, 31, 0x2A2084u);
    ctx->pc = 0x2A2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A207Cu;
    // 0x2a2080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A207Cu, 0x2A2084u)) {
        return;
    }
    ctx->pc = 0x2A2084u;
label_2a2084:
    // 0x2a2084: 0x1c4001bb  bgtz        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x2A2084u;
    {
        const bool branch_taken_0x2a2084 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2084u;
        // 0x2a2088: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2084) {
            ctx->pc = 0x2A2774u;
            goto label_2a2774;
        }
    }
    ctx->pc = 0x2A208Cu;
    // 0x2a208c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2090: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A2090u;
    SET_GPR_U32(ctx, 31, 0x2A2098u);
    ctx->pc = 0x2A2094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2090u;
    // 0x2a2094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A2090u, 0x2A2098u)) {
        return;
    }
    ctx->pc = 0x2A2098u;
label_2a2098:
    // 0x2a2098: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a209c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A209Cu;
    SET_GPR_U32(ctx, 31, 0x2A20A4u);
    ctx->pc = 0x2A20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A209Cu;
    // 0x2a20a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A209Cu, 0x2A20A4u)) {
        return;
    }
    ctx->pc = 0x2A20A4u;
label_2a20a4:
    // 0x2a20a4: 0x44001af  bltz        $v0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x2A20A4u;
    {
        const bool branch_taken_0x2a20a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20A4u;
        // 0x2a20a8: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20a4) {
            ctx->pc = 0x2A2764u;
            goto label_2a2764;
        }
    }
    ctx->pc = 0x2A20ACu;
    // 0x2a20ac: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2A20ACu;
    {
        const bool branch_taken_0x2a20ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20ACu;
        // 0x2a20b0: 0xdfb40198  ld          $s4, 0x198($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20ac) {
            ctx->pc = 0x2A2294u;
            goto label_2a2294;
        }
    }
    ctx->pc = 0x2A20B4u;
label_2a20b4:
    // 0x2a20b4: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A20B4u;
    {
        const bool branch_taken_0x2a20b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20B4u;
        // 0x2a20b8: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20b4) {
            ctx->pc = 0x2A219Cu;
            goto label_2a219c;
        }
    }
    ctx->pc = 0x2A20BCu;
    // 0x2a20bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2a20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2a20c0: 0x2463df90  addiu       $v1, $v1, -0x2070
    ctx->pc = 0x2a20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958992));
    // 0x2a20c4: 0x34128048  ori         $s2, $zero, 0x8048
    ctx->pc = 0x2a20c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2a20c8: 0x1293fc  dsll32      $s2, $s2, 15
    ctx->pc = 0x2a20c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 15));
    // 0x2a20cc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2a20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a20d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a20d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a20d8: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2a20d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a20dc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2a20dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2a20e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a20e4: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2A20E4u;
    SET_GPR_U32(ctx, 31, 0x2A20ECu);
    ctx->pc = 0x2A20E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20E4u;
    // 0x2a20e8: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2A20E4u, 0x2A20ECu)) {
        return;
    }
    ctx->pc = 0x2A20ECu;
label_2a20ec:
    // 0x2a20ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a20ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20f0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A20F0u;
    SET_GPR_U32(ctx, 31, 0x2A20F8u);
    ctx->pc = 0x2A20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20F0u;
    // 0x2a20f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A20F0u, 0x2A20F8u)) {
        return;
    }
    ctx->pc = 0x2A20F8u;
label_2a20f8:
    // 0x2a20f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A20F8u;
    {
        const bool branch_taken_0x2a20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20F8u;
        // 0x2a20fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20f8) {
            ctx->pc = 0x2A211Cu;
            goto label_2a211c;
        }
    }
    ctx->pc = 0x2A2100u;
label_2a2100:
    // 0x2a2100: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A2100u;
    SET_GPR_U32(ctx, 31, 0x2A2108u);
    ctx->pc = 0x2A2104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2100u;
    // 0x2a2104: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A2100u, 0x2A2108u)) {
        return;
    }
    ctx->pc = 0x2A2108u;
label_2a2108:
    // 0x2a2108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a210c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a210cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2110: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A2110u;
    SET_GPR_U32(ctx, 31, 0x2A2118u);
    ctx->pc = 0x2A2114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2110u;
    // 0x2a2114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A2110u, 0x2A2118u)) {
        return;
    }
    ctx->pc = 0x2A2118u;
label_2a2118:
    // 0x2a2118: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a2118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a211c:
    // 0x2a211c: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2A211Cu;
    SET_GPR_U32(ctx, 31, 0x2A2124u);
    ctx->pc = 0x2A2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A211Cu;
    // 0x2a2120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2A211Cu, 0x2A2124u)) {
        return;
    }
    ctx->pc = 0x2A2124u;
label_2a2124:
    // 0x2a2124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2128: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A2128u;
    SET_GPR_U32(ctx, 31, 0x2A2130u);
    ctx->pc = 0x2A212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2128u;
    // 0x2a212c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A2128u, 0x2A2130u)) {
        return;
    }
    ctx->pc = 0x2A2130u;
label_2a2130:
    // 0x2a2130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2134: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A2134u;
    SET_GPR_U32(ctx, 31, 0x2A213Cu);
    ctx->pc = 0x2A2138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2134u;
    // 0x2a2138: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A2134u, 0x2A213Cu)) {
        return;
    }
    ctx->pc = 0x2A213Cu;
label_2a213c:
    // 0x2a213c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2a213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a2140: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a2140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2144: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2a2144u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2148: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a214c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a214cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a2150: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A2150u;
    SET_GPR_U32(ctx, 31, 0x2A2158u);
    ctx->pc = 0x2A2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2150u;
    // 0x2a2154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A2150u, 0x2A2158u)) {
        return;
    }
    ctx->pc = 0x2A2158u;
label_2a2158:
    // 0x2a2158: 0x4420260  bltzl       $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x2A2158u;
    {
        const bool branch_taken_0x2a2158 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a2158) {
            ctx->pc = 0x2A215Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2158u;
            // 0x2a215c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2ADCu;
            goto label_2a2adc;
        }
    }
    ctx->pc = 0x2A2160u;
    // 0x2a2160: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2a2160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2a2164: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2a2164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2a2168: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A2168u;
    SET_GPR_U32(ctx, 31, 0x2A2170u);
    ctx->pc = 0x2A216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2168u;
    // 0x2a216c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A2168u, 0x2A2170u)) {
        return;
    }
    ctx->pc = 0x2A2170u;
label_2a2170:
    // 0x2a2170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2174: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A2174u;
    SET_GPR_U32(ctx, 31, 0x2A217Cu);
    ctx->pc = 0x2A2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2174u;
    // 0x2a2178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A2174u, 0x2A217Cu)) {
        return;
    }
    ctx->pc = 0x2A217Cu;
label_2a217c:
    // 0x2a217c: 0x4400096  bltz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2A217Cu;
    {
        const bool branch_taken_0x2a217c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A217Cu;
        // 0x2a2180: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a217c) {
            ctx->pc = 0x2A23D8u;
            goto label_2a23d8;
        }
    }
    ctx->pc = 0x2A2184u;
    // 0x2a2184: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a2184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a2188: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x2a2188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a218c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2A218Cu;
    {
        const bool branch_taken_0x2a218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A218Cu;
        // 0x2a2190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a218c) {
            ctx->pc = 0x2A2100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2100;
        }
    }
    ctx->pc = 0x2A2194u;
    // 0x2a2194: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2A2194u;
    {
        const bool branch_taken_0x2a2194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2194u;
        // 0x2a2198: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2194) {
            ctx->pc = 0x2A2290u;
            goto label_2a2290;
        }
    }
    ctx->pc = 0x2A219Cu;
label_2a219c:
    // 0x2a219c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2a219cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2a21a0: 0x2463df90  addiu       $v1, $v1, -0x2070
    ctx->pc = 0x2a21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958992));
    // 0x2a21a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a21a8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2a21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a21ac: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x2a21acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a21b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a21b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a21b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a21bc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A21BCu;
    SET_GPR_U32(ctx, 31, 0x2A21C4u);
    ctx->pc = 0x2A21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21BCu;
    // 0x2a21c0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A21BCu, 0x2A21C4u)) {
        return;
    }
    ctx->pc = 0x2A21C4u;
label_2a21c4:
    // 0x2a21c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A21C4u;
    {
        const bool branch_taken_0x2a21c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21C4u;
        // 0x2a21c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21c4) {
            ctx->pc = 0x2A21E8u;
            goto label_2a21e8;
        }
    }
    ctx->pc = 0x2A21CCu;
    // 0x2a21cc: 0x0  nop
    ctx->pc = 0x2a21ccu;
    // NOP
label_2a21d0:
    // 0x2a21d0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2a21d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2a21d4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a21d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a21d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21dc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A21DCu;
    SET_GPR_U32(ctx, 31, 0x2A21E4u);
    ctx->pc = 0x2A21E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21DCu;
    // 0x2a21e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A21DCu, 0x2A21E4u)) {
        return;
    }
    ctx->pc = 0x2A21E4u;
label_2a21e4:
    // 0x2a21e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a21e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a21e8:
    // 0x2a21e8: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2A21E8u;
    SET_GPR_U32(ctx, 31, 0x2A21F0u);
    ctx->pc = 0x2A21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21E8u;
    // 0x2a21ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2A21E8u, 0x2A21F0u)) {
        return;
    }
    ctx->pc = 0x2A21F0u;
label_2a21f0:
    // 0x2a21f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a21f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21f4: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A21F4u;
    SET_GPR_U32(ctx, 31, 0x2A21FCu);
    ctx->pc = 0x2A21F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21F4u;
    // 0x2a21f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A21F4u, 0x2A21FCu)) {
        return;
    }
    ctx->pc = 0x2A21FCu;
label_2a21fc:
    // 0x2a21fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a21fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2200: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A2200u;
    SET_GPR_U32(ctx, 31, 0x2A2208u);
    ctx->pc = 0x2A2204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2200u;
    // 0x2a2204: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A2200u, 0x2A2208u)) {
        return;
    }
    ctx->pc = 0x2A2208u;
label_2a2208:
    // 0x2a2208: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2a2208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a220c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a220cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2210: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2a2210u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2214: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a2218: 0x1662ffed  bne         $s3, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A2218u;
    {
        const bool branch_taken_0x2a2218 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2218u;
        // 0x2a221c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2218) {
            ctx->pc = 0x2A21D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a21d0;
        }
    }
    ctx->pc = 0x2A2220u;
    // 0x2a2220: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2a2220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a2224: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a2224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a2228: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A2228u;
    SET_GPR_U32(ctx, 31, 0x2A2230u);
    ctx->pc = 0x2A222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2228u;
    // 0x2a222c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A2228u, 0x2A2230u)) {
        return;
    }
    ctx->pc = 0x2A2230u;
label_2a2230:
    // 0x2a2230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a2230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2234: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A2234u;
    SET_GPR_U32(ctx, 31, 0x2A223Cu);
    ctx->pc = 0x2A2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2234u;
    // 0x2a2238: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A2234u, 0x2A223Cu)) {
        return;
    }
    ctx->pc = 0x2A223Cu;
label_2a223c:
    // 0x2a223c: 0x5c400067  bgtzl       $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2A223Cu;
    {
        const bool branch_taken_0x2a223c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2a223c) {
            ctx->pc = 0x2A2240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A223Cu;
            // 0x2a2240: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A23DCu;
            goto label_2a23dc;
        }
    }
    ctx->pc = 0x2A2244u;
    // 0x2a2244: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2a2244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a2248: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2a2248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2a224c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A224Cu;
    SET_GPR_U32(ctx, 31, 0x2A2254u);
    ctx->pc = 0x2A2250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A224Cu;
    // 0x2a2250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A224Cu, 0x2A2254u)) {
        return;
    }
    ctx->pc = 0x2A2254u;
label_2a2254:
    // 0x2a2254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2258: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A2258u;
    SET_GPR_U32(ctx, 31, 0x2A2260u);
    ctx->pc = 0x2A225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2258u;
    // 0x2a225c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A2258u, 0x2A2260u)) {
        return;
    }
    ctx->pc = 0x2A2260u;
label_2a2260:
    // 0x2a2260: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2260u;
    {
        const bool branch_taken_0x2a2260 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2260u;
        // 0x2a2264: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2260) {
            ctx->pc = 0x2A228Cu;
            goto label_2a228c;
        }
    }
    ctx->pc = 0x2A2268u;
label_2a2268:
    // 0x2a2268: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2a2268u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2a226c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2a226cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a2270: 0x0  nop
    ctx->pc = 0x2a2270u;
    // NOP
    // 0x2a2274: 0x0  nop
    ctx->pc = 0x2a2274u;
    // NOP
    // 0x2a2278: 0x0  nop
    ctx->pc = 0x2a2278u;
    // NOP
    // 0x2a227c: 0x1052fffa  beq         $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A227Cu;
    {
        const bool branch_taken_0x2a227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2a227c) {
            ctx->pc = 0x2A2268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2268;
        }
    }
    ctx->pc = 0x2A2284u;
    // 0x2a2284: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x2A2284u;
    {
        const bool branch_taken_0x2a2284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2284u;
        // 0x2a2288: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2284) {
            ctx->pc = 0x2A2ADCu;
            goto label_2a2adc;
        }
    }
    ctx->pc = 0x2A228Cu;
label_2a228c:
    // 0x2a228c: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x2a228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2a2290:
    // 0x2a2290: 0xdfb40198  ld          $s4, 0x198($sp)
    ctx->pc = 0x2a2290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_2a2294:
    // 0x2a2294: 0x8fb6016c  lw          $s6, 0x16C($sp)
    ctx->pc = 0x2a2294u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2a2298: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x2a2298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x2a229c: 0x8fb501a0  lw          $s5, 0x1A0($sp)
    ctx->pc = 0x2a229cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2a22a0:
    // 0x2a22a0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2a22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a22a4: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x2A22A4u;
    {
        const bool branch_taken_0x2a22a4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22A4u;
        // 0x2a22a8: 0x2ac2000f  slti        $v0, $s6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22a4) {
            ctx->pc = 0x2A2420u;
            goto label_2a2420;
        }
    }
    ctx->pc = 0x2A22ACu;
    // 0x2a22ac: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2A22ACu;
    {
        const bool branch_taken_0x2a22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22ACu;
        // 0x2a22b0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22ac) {
            ctx->pc = 0x2A2420u;
            goto label_2a2420;
        }
    }
    ctx->pc = 0x2A22B4u;
    // 0x2a22b4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x2a22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x2a22b8: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x2a22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
    // 0x2a22bc: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2a22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a22c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a22c4: 0x4810011  bgez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A22C4u;
    {
        const bool branch_taken_0x2a22c4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2A22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22C4u;
        // 0x2a22c8: 0xdc710000  ld          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22c4) {
            ctx->pc = 0x2A230Cu;
            goto label_2a230c;
        }
    }
    ctx->pc = 0x2A22CCu;
    // 0x2a22cc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2a22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a22d0: 0x1c40000f  bgtz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A22D0u;
    {
        const bool branch_taken_0x2a22d0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22D0u;
        // 0x2a22d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22d0) {
            ctx->pc = 0x2A2310u;
            goto label_2a2310;
        }
    }
    ctx->pc = 0x2A22D8u;
    // 0x2a22d8: 0x4420124  bltzl       $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x2A22D8u;
    {
        const bool branch_taken_0x2a22d8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a22d8) {
            ctx->pc = 0x2A22DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A22D8u;
            // 0x2a22dc: 0x4b027  nor         $s6, $zero, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A276Cu;
            goto label_2a276c;
        }
    }
    ctx->pc = 0x2A22E0u;
    // 0x2a22e0: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x2a22e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2a22e4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a22e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a22e8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A22E8u;
    SET_GPR_U32(ctx, 31, 0x2A22F0u);
    ctx->pc = 0x2A22ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A22E8u;
    // 0x2a22ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A22E8u, 0x2A22F0u)) {
        return;
    }
    ctx->pc = 0x2A22F0u;
label_2a22f0:
    // 0x2a22f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a22f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22f4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A22F4u;
    SET_GPR_U32(ctx, 31, 0x2A22FCu);
    ctx->pc = 0x2A22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A22F4u;
    // 0x2a22f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A22F4u, 0x2A22FCu)) {
        return;
    }
    ctx->pc = 0x2A22FCu;
label_2a22fc:
    // 0x2a22fc: 0x18400119  blez        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x2A22FCu;
    {
        const bool branch_taken_0x2a22fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22FCu;
        // 0x2a2300: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22fc) {
            ctx->pc = 0x2A2764u;
            goto label_2a2764;
        }
    }
    ctx->pc = 0x2A2304u;
    // 0x2a2304: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x2A2304u;
    {
        const bool branch_taken_0x2a2304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2304u;
        // 0x2a2308: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2304) {
            ctx->pc = 0x2A2778u;
            goto label_2a2778;
        }
    }
    ctx->pc = 0x2A230Cu;
label_2a230c:
    // 0x2a230c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a230cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2310:
    // 0x2a2310: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A2310u;
    {
        const bool branch_taken_0x2a2310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2310u;
        // 0x2a2314: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2310) {
            ctx->pc = 0x2A2340u;
            goto label_2a2340;
        }
    }
    ctx->pc = 0x2A2318u;
label_2a2318:
    // 0x2a2318: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2a2318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2a231c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a231cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a2320: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A2320u;
    SET_GPR_U32(ctx, 31, 0x2A2328u);
    ctx->pc = 0x2A2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2320u;
    // 0x2a2324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A2320u, 0x2A2328u)) {
        return;
    }
    ctx->pc = 0x2A2328u;
label_2a2328:
    // 0x2a2328: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a2328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a232c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2330: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A2330u;
    SET_GPR_U32(ctx, 31, 0x2A2338u);
    ctx->pc = 0x2A2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2330u;
    // 0x2a2334: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A2330u, 0x2A2338u)) {
        return;
    }
    ctx->pc = 0x2A2338u;
label_2a2338:
    // 0x2a2338: 0x104001e8  beqz        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x2A2338u;
    {
        const bool branch_taken_0x2a2338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2338u;
        // 0x2a233c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2338) {
            ctx->pc = 0x2A2ADCu;
            goto label_2a2adc;
        }
    }
    ctx->pc = 0x2A2340u;
label_2a2340:
    // 0x2a2340: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2344: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2A2344u;
    SET_GPR_U32(ctx, 31, 0x2A234Cu);
    ctx->pc = 0x2A2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2344u;
    // 0x2a2348: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2A2344u, 0x2A234Cu)) {
        return;
    }
    ctx->pc = 0x2A234Cu;
label_2a234c:
    // 0x2a234c: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2A234Cu;
    SET_GPR_U32(ctx, 31, 0x2A2354u);
    ctx->pc = 0x2A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A234Cu;
    // 0x2a2350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2A234Cu, 0x2A2354u)) {
        return;
    }
    ctx->pc = 0x2A2354u;
label_2a2354:
    // 0x2a2354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2358: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A2358u;
    SET_GPR_U32(ctx, 31, 0x2A2360u);
    ctx->pc = 0x2A235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2358u;
    // 0x2a235c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A2358u, 0x2A2360u)) {
        return;
    }
    ctx->pc = 0x2A2360u;
label_2a2360:
    // 0x2a2360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2364: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A2364u;
    SET_GPR_U32(ctx, 31, 0x2A236Cu);
    ctx->pc = 0x2A2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2364u;
    // 0x2a2368: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A2364u, 0x2A236Cu)) {
        return;
    }
    ctx->pc = 0x2A236Cu;
label_2a236c:
    // 0x2a236c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a236cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2370: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A2370u;
    SET_GPR_U32(ctx, 31, 0x2A2378u);
    ctx->pc = 0x2A2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2370u;
    // 0x2a2374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A2370u, 0x2A2378u)) {
        return;
    }
    ctx->pc = 0x2A2378u;
label_2a2378:
    // 0x2a2378: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2a2378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a237c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a237cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2380: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2a2380u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2384: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2a2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a2388: 0x1663ffe3  bne         $s3, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2A2388u;
    {
        const bool branch_taken_0x2a2388 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2388u;
        // 0x2a238c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2388) {
            ctx->pc = 0x2A2318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2318;
        }
    }
    ctx->pc = 0x2A2390u;
    // 0x2a2390: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2394: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A2394u;
    SET_GPR_U32(ctx, 31, 0x2A239Cu);
    ctx->pc = 0x2A2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2394u;
    // 0x2a2398: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A2394u, 0x2A239Cu)) {
        return;
    }
    ctx->pc = 0x2A239Cu;
label_2a239c:
    // 0x2a239c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a239cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a23a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23a4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A23A4u;
    SET_GPR_U32(ctx, 31, 0x2A23ACu);
    ctx->pc = 0x2A23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23A4u;
    // 0x2a23a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A23A4u, 0x2A23ACu)) {
        return;
    }
    ctx->pc = 0x2A23ACu;
label_2a23ac:
    // 0x2a23ac: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A23ACu;
    {
        const bool branch_taken_0x2a23ac = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23ACu;
        // 0x2a23b0: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23ac) {
            ctx->pc = 0x2A23E0u;
            goto label_2a23e0;
        }
    }
    ctx->pc = 0x2A23B4u;
    // 0x2a23b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a23b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23b8: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A23B8u;
    SET_GPR_U32(ctx, 31, 0x2A23C0u);
    ctx->pc = 0x2A23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23B8u;
    // 0x2a23bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A23B8u, 0x2A23C0u)) {
        return;
    }
    ctx->pc = 0x2A23C0u;
label_2a23c0:
    // 0x2a23c0: 0x144001c6  bnez        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x2A23C0u;
    {
        const bool branch_taken_0x2a23c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23C0u;
        // 0x2a23c4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23c0) {
            ctx->pc = 0x2A2ADCu;
            goto label_2a2adc;
        }
    }
    ctx->pc = 0x2A23C8u;
    // 0x2a23c8: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x2A23C8u;
    {
        const bool branch_taken_0x2a23c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23C8u;
        // 0x2a23cc: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23c8) {
            ctx->pc = 0x2A2ADCu;
            goto label_2a2adc;
        }
    }
    ctx->pc = 0x2A23D0u;
    // 0x2a23d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A23D0u;
    {
        const bool branch_taken_0x2a23d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23D0u;
        // 0x2a23d4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23d0) {
            ctx->pc = 0x2A23E8u;
            goto label_2a23e8;
        }
    }
    ctx->pc = 0x2A23D8u;
label_2a23d8:
    // 0x2a23d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a23d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2a23dc:
    // 0x2a23dc: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2a23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2a23e0:
    // 0x2a23e0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2a23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a23e4: 0x0  nop
    ctx->pc = 0x2a23e4u;
    // NOP
label_2a23e8:
    // 0x2a23e8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2a23e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2a23ec:
    // 0x2a23ec: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2a23ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a23f0: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A23F0u;
    {
        const bool branch_taken_0x2a23f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23F0u;
        // 0x2a23f4: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23f0) {
            ctx->pc = 0x2A2410u;
            goto label_2a2410;
        }
    }
    ctx->pc = 0x2A23F8u;
    // 0x2a23f8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x2a23f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a23fc: 0x56a4fffb  bnel        $s5, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A23FCu;
    {
        const bool branch_taken_0x2a23fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a23fc) {
            ctx->pc = 0x2A2400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A23FCu;
            // 0x2a2400: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A23ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a23ec;
        }
    }
    ctx->pc = 0x2A2404u;
    // 0x2a2404: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a2404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2408: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a2408u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2a240c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a2410:
    // 0x2a2410: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2a2410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a2414: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2a2414u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a2418: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x2A2418u;
    {
        const bool branch_taken_0x2a2418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2418u;
        // 0x2a241c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2418) {
            ctx->pc = 0x2A2ADCu;
            goto label_2a2adc;
        }
    }
    ctx->pc = 0x2A2420u;
label_2a2420:
    // 0x2a2420: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x2a2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2a2424: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x2a2424u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a2428: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A2428u;
    {
        const bool branch_taken_0x2a2428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2428u;
        // 0x2a242c: 0x8fb2015c  lw          $s2, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2428) {
            ctx->pc = 0x2A24DCu;
            goto label_2a24dc;
        }
    }
    ctx->pc = 0x2A2430u;
    // 0x2a2430: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2a2430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a2434: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x2a2434u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2438: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2438u;
    {
        const bool branch_taken_0x2a2438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2438u;
        // 0x2a243c: 0xafa401a4  sw          $a0, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2438) {
            ctx->pc = 0x2A245Cu;
            goto label_2a245c;
        }
    }
    ctx->pc = 0x2A2440u;
    // 0x2a2440: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x2a2440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2a2444: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A2444u;
    {
        const bool branch_taken_0x2a2444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2444u;
        // 0x2a2448: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2444) {
            ctx->pc = 0x2A24B0u;
            goto label_2a24b0;
        }
    }
    ctx->pc = 0x2A244Cu;
    // 0x2a244c: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2a2450: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2a2454: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2454u;
    {
        const bool branch_taken_0x2a2454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2454u;
        // 0x2a2458: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2454) {
            ctx->pc = 0x2A24B0u;
            goto label_2a24b0;
        }
    }
    ctx->pc = 0x2A245Cu;
label_2a245c:
    // 0x2a245c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2a245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a2460: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2a2460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2a2464: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x2a2464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a2468: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2a2468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2a246c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A246Cu;
    {
        const bool branch_taken_0x2a246c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A246Cu;
        // 0x2a2470: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a246c) {
            ctx->pc = 0x2A247Cu;
            goto label_2a247c;
        }
    }
    ctx->pc = 0x2A2474u;
    // 0x2a2474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2474u;
    {
        const bool branch_taken_0x2a2474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2474u;
        // 0x2a2478: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2474) {
            ctx->pc = 0x2A2498u;
            goto label_2a2498;
        }
    }
    ctx->pc = 0x2A247Cu;
label_2a247c:
    // 0x2a247c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a247cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2480: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2a2480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2a2484: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2a2484u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a2488: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a248c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a2490: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2a2490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x2a2494: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x2a2494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_2a2498:
    // 0x2a2498: 0x8fb30160  lw          $s3, 0x160($sp)
    ctx->pc = 0x2a2498u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a249c: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A249Cu;
    {
        const bool branch_taken_0x2a249c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x2A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A249Cu;
        // 0x2a24a0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a249c) {
            ctx->pc = 0x2A24B4u;
            goto label_2a24b4;
        }
    }
    ctx->pc = 0x2A24A4u;
    // 0x2a24a4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x2a24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a24a8: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x2a24a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2a24ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a24acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a24b0:
    // 0x2a24b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a24b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a24b4:
    // 0x2a24b4: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A24B4u;
    SET_GPR_U32(ctx, 31, 0x2A24BCu);
    ctx->pc = 0x2A24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24B4u;
    // 0x2a24b8: 0x3d3f021  addu        $fp, $fp, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A24B4u, 0x2A24BCu)) {
        return;
    }
    ctx->pc = 0x2A24BCu;
label_2a24bc:
    // 0x2a24bc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x2a24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a24c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a24c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a24c8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2a24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a24cc: 0xc0a7f66  jal         func_29FD98
    ctx->pc = 0x2A24CCu;
    SET_GPR_U32(ctx, 31, 0x2A24D4u);
    ctx->pc = 0x2A24D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24CCu;
    // 0x2a24d0: 0xafa30158  sw          $v1, 0x158($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FD98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FD98u, 0x2A24CCu, 0x2A24D4u)) {
        return;
    }
    ctx->pc = 0x2A24D4u;
label_2a24d4:
    // 0x2a24d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A24D4u;
    {
        const bool branch_taken_0x2a24d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24D4u;
        // 0x2a24d8: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24d4) {
            ctx->pc = 0x2A24E8u;
            goto label_2a24e8;
        }
    }
    ctx->pc = 0x2A24DCu;
label_2a24dc:
    // 0x2a24dc: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2a24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a24e0: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x2a24e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a24e4: 0xafa401a4  sw          $a0, 0x1A4($sp)
    ctx->pc = 0x2a24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
label_2a24e8:
    // 0x2a24e8: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A24E8u;
    {
        const bool branch_taken_0x2a24e8 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24E8u;
        // 0x2a24ec: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24e8) {
            ctx->pc = 0x2A2518u;
            goto label_2a2518;
        }
    }
    ctx->pc = 0x2A24F0u;
    // 0x2a24f0: 0x1bc00009  blez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A24F0u;
    {
        const bool branch_taken_0x2a24f0 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x2A24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24F0u;
        // 0x2a24f4: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24f0) {
            ctx->pc = 0x2A2518u;
            goto label_2a2518;
        }
    }
    ctx->pc = 0x2A24F8u;
    // 0x2a24f8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2a24f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2a24fc: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x2a24fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17));
    // 0x2a2500: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x2a2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a2504: 0x3d3f023  subu        $fp, $fp, $s3
    ctx->pc = 0x2a2504u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2a2508: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x2a2508u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2a250c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2a250cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a2510: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x2a2510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x2a2514: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2a2514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2a2518:
    // 0x2a2518: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A2518u;
    {
        const bool branch_taken_0x2a2518 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2A251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2518u;
        // 0x2a251c: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2518) {
            ctx->pc = 0x2A2580u;
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A2520u;
    // 0x2a2520: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A2520u;
    {
        const bool branch_taken_0x2a2520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2520u;
        // 0x2a2524: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2520) {
            ctx->pc = 0x2A2574u;
            goto label_2a2574;
        }
    }
    ctx->pc = 0x2A2528u;
    // 0x2a2528: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2528u;
    {
        const bool branch_taken_0x2a2528 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2A252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2528u;
        // 0x2a252c: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2528) {
            ctx->pc = 0x2A2554u;
            goto label_2a2554;
        }
    }
    ctx->pc = 0x2A2530u;
    // 0x2a2530: 0xc0a8002  jal         func_2A0008
    ctx->pc = 0x2A2530u;
    SET_GPR_U32(ctx, 31, 0x2A2538u);
    ctx->pc = 0x2A2534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2530u;
    // 0x2a2534: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0008u, 0x2A2530u, 0x2A2538u)) {
        return;
    }
    ctx->pc = 0x2A2538u;
label_2a2538:
    // 0x2a2538: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2a2538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2a253c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a253cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2540: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x2a2540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2a2544: 0xc0a7f74  jal         func_29FDD0
    ctx->pc = 0x2A2544u;
    SET_GPR_U32(ctx, 31, 0x2A254Cu);
    ctx->pc = 0x2A2548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2544u;
    // 0x2a2548: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FDD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FDD0u, 0x2A2544u, 0x2A254Cu)) {
        return;
    }
    ctx->pc = 0x2A254Cu;
label_2a254c:
    // 0x2a254c: 0xafb70188  sw          $s7, 0x188($sp)
    ctx->pc = 0x2a254cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 23));
    // 0x2a2550: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a2550u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2554:
    // 0x2a2554: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2a2554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2a2558: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x2a2558u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a255c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A255Cu;
    {
        const bool branch_taken_0x2a255c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A255Cu;
        // 0x2a2560: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a255c) {
            ctx->pc = 0x2A2580u;
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A2564u;
    // 0x2a2564: 0xc0a8002  jal         func_2A0008
    ctx->pc = 0x2A2564u;
    SET_GPR_U32(ctx, 31, 0x2A256Cu);
    ctx->pc = 0x2A2568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2564u;
    // 0x2a2568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0008u, 0x2A2564u, 0x2A256Cu)) {
        return;
    }
    ctx->pc = 0x2A256Cu;
label_2a256c:
    // 0x2a256c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A256Cu;
    {
        const bool branch_taken_0x2a256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A256Cu;
        // 0x2a2570: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a256c) {
            ctx->pc = 0x2A2580u;
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A2574u;
label_2a2574:
    // 0x2a2574: 0xc0a8002  jal         func_2A0008
    ctx->pc = 0x2A2574u;
    SET_GPR_U32(ctx, 31, 0x2A257Cu);
    ctx->pc = 0x2A2578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2574u;
    // 0x2a2578: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0008u, 0x2A2574u, 0x2A257Cu)) {
        return;
    }
    ctx->pc = 0x2A257Cu;
label_2a257c:
    // 0x2a257c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a257cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2580:
    // 0x2a2580: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a2584: 0xc0a7f66  jal         func_29FD98
    ctx->pc = 0x2A2584u;
    SET_GPR_U32(ctx, 31, 0x2A258Cu);
    ctx->pc = 0x2A2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2584u;
    // 0x2a2588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FD98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FD98u, 0x2A2584u, 0x2A258Cu)) {
        return;
    }
    ctx->pc = 0x2A258Cu;
label_2a258c:
    // 0x2a258c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2a258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2a2590: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2590u;
    {
        const bool branch_taken_0x2a2590 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2A2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2590u;
        // 0x2a2594: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2590) {
            ctx->pc = 0x2A25A8u;
            goto label_2a25a8;
        }
    }
    ctx->pc = 0x2A2598u;
    // 0x2a2598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a259c: 0xc0a8002  jal         func_2A0008
    ctx->pc = 0x2A259Cu;
    SET_GPR_U32(ctx, 31, 0x2A25A4u);
    ctx->pc = 0x2A25A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A259Cu;
    // 0x2a25a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0008u, 0x2A259Cu, 0x2A25A4u)) {
        return;
    }
    ctx->pc = 0x2A25A4u;
label_2a25a4:
    // 0x2a25a4: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x2a25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_2a25a8:
    // 0x2a25a8: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x2a25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2a25ac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A25ACu;
    {
        const bool branch_taken_0x2a25ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25ACu;
        // 0x2a25b0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25ac) {
            ctx->pc = 0x2A2614u;
            goto label_2a2614;
        }
    }
    ctx->pc = 0x2A25B4u;
    // 0x2a25b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a25b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a25b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a25b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a25bc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A25BCu;
    {
        const bool branch_taken_0x2a25bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a25bc) {
            ctx->pc = 0x2A25C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A25BCu;
            // 0x2a25c0: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2614u;
            goto label_2a2614;
        }
    }
    ctx->pc = 0x2A25C4u;
    // 0x2a25c4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2a25c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25c8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a25cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a25ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a25d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a25d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a25d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a25d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a25d8: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2A25D8u;
    {
        const bool branch_taken_0x2a25d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a25d8) {
            ctx->pc = 0x2A25DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A25D8u;
            // 0x2a25dc: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2614u;
            goto label_2a2614;
        }
    }
    ctx->pc = 0x2A25E0u;
    // 0x2a25e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a25e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25e4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2a25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2a25e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a25e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a25ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a25ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a25f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A25F0u;
    {
        const bool branch_taken_0x2a25f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25F0u;
        // 0x2a25f4: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25f0) {
            ctx->pc = 0x2A2610u;
            goto label_2a2610;
        }
    }
    ctx->pc = 0x2A25F8u;
    // 0x2a25f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a25fc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2a25fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2a2600: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x2a2600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x2a2604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a2608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2608u;
    {
        const bool branch_taken_0x2a2608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2608u;
        // 0x2a260c: 0xafa20158  sw          $v0, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2608) {
            ctx->pc = 0x2A2614u;
            goto label_2a2614;
        }
    }
    ctx->pc = 0x2A2610u;
label_2a2610:
    // 0x2a2610: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x2a2610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_2a2614:
    // 0x2a2614: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2a2614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2a2618: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2618u;
    {
        const bool branch_taken_0x2a2618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2618u;
        // 0x2a261c: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2618) {
            ctx->pc = 0x2A2640u;
            goto label_2a2640;
        }
    }
    ctx->pc = 0x2A2620u;
    // 0x2a2620: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2624: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a2628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a262c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2630: 0xc0a7f14  jal         func_29FC50
    ctx->pc = 0x2A2630u;
    SET_GPR_U32(ctx, 31, 0x2A2638u);
    ctx->pc = 0x2A2634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2630u;
    // 0x2a2634: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FC50u, 0x2A2630u, 0x2A2638u)) {
        return;
    }
    ctx->pc = 0x2A2638u;
label_2a2638:
    // 0x2a2638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2638u;
    {
        const bool branch_taken_0x2a2638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2638u;
        // 0x2a263c: 0x3c21023  subu        $v0, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2638) {
            ctx->pc = 0x2A2644u;
            goto label_2a2644;
        }
    }
    ctx->pc = 0x2A2640u;
label_2a2640:
    // 0x2a2640: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x2a2640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2a2644:
    // 0x2a2644: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x2a2644u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2a2648: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2648u;
    {
        const bool branch_taken_0x2a2648 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2648u;
        // 0x2a264c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2648) {
            ctx->pc = 0x2A2654u;
            goto label_2a2654;
        }
    }
    ctx->pc = 0x2A2650u;
    // 0x2a2650: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x2a2650u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2a2654:
    // 0x2a2654: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x2a2654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a2658: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2658u;
    {
        const bool branch_taken_0x2a2658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2658u;
        // 0x2a265c: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2658) {
            ctx->pc = 0x2A267Cu;
            goto label_2a267c;
        }
    }
    ctx->pc = 0x2A2660u;
    // 0x2a2660: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x2a2660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a2664: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x2a2664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x2a2668: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x2a2668u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2a266c: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2a266cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2a2670: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2a2670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2a2674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2674u;
    {
        const bool branch_taken_0x2a2674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2674u;
        // 0x2a2678: 0xafa40158  sw          $a0, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2674) {
            ctx->pc = 0x2A2698u;
            goto label_2a2698;
        }
    }
    ctx->pc = 0x2A267Cu;
label_2a267c:
    // 0x2a267c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A267Cu;
    {
        const bool branch_taken_0x2a267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A267Cu;
        // 0x2a2680: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a267c) {
            ctx->pc = 0x2A2698u;
            goto label_2a2698;
        }
    }
    ctx->pc = 0x2A2684u;
    // 0x2a2684: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x2a2684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x2a2688: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x2a2688u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2a268c: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2a268cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2a2690: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a2690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a2694: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x2a2694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_2a2698:
    // 0x2a2698: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x2a2698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a269c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A269Cu;
    {
        const bool branch_taken_0x2a269c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2A26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A269Cu;
        // 0x2a26a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a269c) {
            ctx->pc = 0x2A26B0u;
            goto label_2a26b0;
        }
    }
    ctx->pc = 0x2A26A4u;
    // 0x2a26a4: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A26A4u;
    SET_GPR_U32(ctx, 31, 0x2A26ACu);
    ctx->pc = 0x2A26A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26A4u;
    // 0x2a26a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A26A4u, 0x2A26ACu)) {
        return;
    }
    ctx->pc = 0x2A26ACu;
label_2a26ac:
    // 0x2a26ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a26acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a26b0:
    // 0x2a26b0: 0x1bc00004  blez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A26B0u;
    {
        const bool branch_taken_0x2a26b0 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x2A26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26B0u;
        // 0x2a26b4: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26b0) {
            ctx->pc = 0x2A26C4u;
            goto label_2a26c4;
        }
    }
    ctx->pc = 0x2A26B8u;
    // 0x2a26b8: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A26B8u;
    SET_GPR_U32(ctx, 31, 0x2A26C0u);
    ctx->pc = 0x2A26BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26B8u;
    // 0x2a26bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A26B8u, 0x2A26C0u)) {
        return;
    }
    ctx->pc = 0x2A26C0u;
label_2a26c0:
    // 0x2a26c0: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x2a26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_2a26c4:
    // 0x2a26c4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2a26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a26c8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A26C8u;
    {
        const bool branch_taken_0x2a26c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26C8u;
        // 0x2a26cc: 0x8fa5018c  lw          $a1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26c8) {
            ctx->pc = 0x2A271Cu;
            goto label_2a271c;
        }
    }
    ctx->pc = 0x2A26D0u;
    // 0x2a26d0: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A26D0u;
    SET_GPR_U32(ctx, 31, 0x2A26D8u);
    ctx->pc = 0x2A26D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26D0u;
    // 0x2a26d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A26D0u, 0x2A26D8u)) {
        return;
    }
    ctx->pc = 0x2A26D8u;
label_2a26d8:
    // 0x2a26d8: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A26D8u;
    {
        const bool branch_taken_0x2a26d8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26D8u;
        // 0x2a26dc: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26d8) {
            ctx->pc = 0x2A2720u;
            goto label_2a2720;
        }
    }
    ctx->pc = 0x2A26E0u;
    // 0x2a26e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a26e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a26e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a26e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26ec: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A26ECu;
    SET_GPR_U32(ctx, 31, 0x2A26F4u);
    ctx->pc = 0x2A26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26ECu;
    // 0x2a26f0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A26ECu, 0x2A26F4u)) {
        return;
    }
    ctx->pc = 0x2A26F4u;
label_2a26f4:
    // 0x2a26f4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a26f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26f8: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x2a26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2a26fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A26FCu;
    {
        const bool branch_taken_0x2a26fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26FCu;
        // 0x2a2700: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26fc) {
            ctx->pc = 0x2A2714u;
            goto label_2a2714;
        }
    }
    ctx->pc = 0x2A2704u;
    // 0x2a2704: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a2704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2708: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A2708u;
    SET_GPR_U32(ctx, 31, 0x2A2710u);
    ctx->pc = 0x2A270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2708u;
    // 0x2a270c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A2708u, 0x2A2710u)) {
        return;
    }
    ctx->pc = 0x2A2710u;
label_2a2710:
    // 0x2a2710: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2a2710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_2a2714:
    // 0x2a2714: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a2714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a2718: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x2a2718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_2a271c:
    // 0x2a271c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2a271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2a2720:
    // 0x2a2720: 0x5c800019  bgtzl       $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A2720u;
    {
        const bool branch_taken_0x2a2720 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2a2720) {
            ctx->pc = 0x2A2724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2720u;
            // 0x2a2724: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2788u;
            goto label_2a2788;
        }
    }
    ctx->pc = 0x2A2728u;
    // 0x2a2728: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x2a2728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a272c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2a272cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a2730: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A2730u;
    {
        const bool branch_taken_0x2a2730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2730) {
            ctx->pc = 0x2A2734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2730u;
            // 0x2a2734: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2788u;
            goto label_2a2788;
        }
    }
    ctx->pc = 0x2A2738u;
    // 0x2a2738: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2738u;
    {
        const bool branch_taken_0x2a2738 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2A273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2738u;
        // 0x2a273c: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2738) {
            ctx->pc = 0x2A2764u;
            goto label_2a2764;
        }
    }
    ctx->pc = 0x2A2740u;
    // 0x2a2740: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a2740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a2744: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A2744u;
    SET_GPR_U32(ctx, 31, 0x2A274Cu);
    ctx->pc = 0x2A2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2744u;
    // 0x2a2748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A2744u, 0x2A274Cu)) {
        return;
    }
    ctx->pc = 0x2A274Cu;
label_2a274c:
    // 0x2a274c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x2a274cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x2a2750: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a2750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2754: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A2754u;
    SET_GPR_U32(ctx, 31, 0x2A275Cu);
    ctx->pc = 0x2A2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2754u;
    // 0x2a2758: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A2754u, 0x2A275Cu)) {
        return;
    }
    ctx->pc = 0x2A275Cu;
label_2a275c:
    // 0x2a275c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A275Cu;
    {
        const bool branch_taken_0x2a275c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A275Cu;
        // 0x2a2760: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a275c) {
            ctx->pc = 0x2A2774u;
            goto label_2a2774;
        }
    }
    ctx->pc = 0x2A2764u;
label_2a2764:
    // 0x2a2764: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2a2764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a2768: 0x4b027  nor         $s6, $zero, $a0
    ctx->pc = 0x2a2768u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_2a276c:
    // 0x2a276c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2A276Cu;
    {
        const bool branch_taken_0x2a276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A276Cu;
        // 0x2a2770: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a276c) {
            ctx->pc = 0x2A2AA0u;
            goto label_2a2aa0;
        }
    }
    ctx->pc = 0x2A2774u;
label_2a2774:
    // 0x2a2774: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2a2778:
    // 0x2a2778: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x2a2778u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x2a277c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2a277cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a2780: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2A2780u;
    {
        const bool branch_taken_0x2a2780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2780u;
        // 0x2a2784: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2780) {
            ctx->pc = 0x2A2AA0u;
            goto label_2a2aa0;
        }
    }
    ctx->pc = 0x2A2788u;
label_2a2788:
    // 0x2a2788: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2A2788u;
    {
        const bool branch_taken_0x2a2788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2788u;
        // 0x2a278c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2788) {
            ctx->pc = 0x2A29B0u;
            goto label_2a29b0;
        }
    }
    ctx->pc = 0x2A2790u;
    // 0x2a2790: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2790u;
    {
        const bool branch_taken_0x2a2790 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2790u;
        // 0x2a2794: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2790) {
            ctx->pc = 0x2A27A4u;
            goto label_2a27a4;
        }
    }
    ctx->pc = 0x2A2798u;
    // 0x2a2798: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A2798u;
    SET_GPR_U32(ctx, 31, 0x2A27A0u);
    ctx->pc = 0x2A279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2798u;
    // 0x2a279c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A2798u, 0x2A27A0u)) {
        return;
    }
    ctx->pc = 0x2A27A0u;
label_2a27a0:
    // 0x2a27a0: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2a27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_2a27a4:
    // 0x2a27a4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x2a27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x2a27a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A27A8u;
    {
        const bool branch_taken_0x2a27a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27A8u;
        // 0x2a27ac: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27a8) {
            ctx->pc = 0x2A27ECu;
            goto label_2a27ec;
        }
    }
    ctx->pc = 0x2A27B0u;
    // 0x2a27b0: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A27B0u;
    SET_GPR_U32(ctx, 31, 0x2A27B8u);
    ctx->pc = 0x2A27B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27B0u;
    // 0x2a27b4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A27B0u, 0x2A27B8u)) {
        return;
    }
    ctx->pc = 0x2A27B8u;
label_2a27b8:
    // 0x2a27b8: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2a27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a27bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a27bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27c0: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x2A27C0u;
    SET_GPR_U32(ctx, 31, 0x2A27C8u);
    ctx->pc = 0x2A27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27C0u;
    // 0x2a27c4: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x2A27C0u, 0x2A27C8u)) {
        return;
    }
    ctx->pc = 0x2A27C8u;
label_2a27c8:
    // 0x2a27c8: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2a27c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x2a27cc: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x2a27ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a27d0: 0xc0a7e62  jal         func_29F988
    ctx->pc = 0x2A27D0u;
    SET_GPR_U32(ctx, 31, 0x2A27D8u);
    ctx->pc = 0x2A27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27D0u;
    // 0x2a27d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F988u, 0x2A27D0u, 0x2A27D8u)) {
        return;
    }
    ctx->pc = 0x2A27D8u;
label_2a27d8:
    // 0x2a27d8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x2a27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a27dc: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A27DCu;
    SET_GPR_U32(ctx, 31, 0x2A27E4u);
    ctx->pc = 0x2A27E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27DCu;
    // 0x2a27e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A27DCu, 0x2A27E4u)) {
        return;
    }
    ctx->pc = 0x2A27E4u;
label_2a27e4:
    // 0x2a27e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A27E4u;
    {
        const bool branch_taken_0x2a27e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27E4u;
        // 0x2a27e8: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27e4) {
            ctx->pc = 0x2A27F0u;
            goto label_2a27f0;
        }
    }
    ctx->pc = 0x2A27ECu;
label_2a27ec:
    // 0x2a27ec: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x2a27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
label_2a27f0:
    // 0x2a27f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a27f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a27f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A27F4u;
    {
        const bool branch_taken_0x2a27f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27F4u;
        // 0x2a27f8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27f4) {
            ctx->pc = 0x2A2868u;
            goto label_2a2868;
        }
    }
    ctx->pc = 0x2A27FCu;
    // 0x2a27fc: 0x0  nop
    ctx->pc = 0x2a27fcu;
    // NOP
label_2a2800:
    // 0x2a2800: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a2800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2804: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a2804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2808: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A2808u;
    SET_GPR_U32(ctx, 31, 0x2A2810u);
    ctx->pc = 0x2A280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2808u;
    // 0x2a280c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A2808u, 0x2A2810u)) {
        return;
    }
    ctx->pc = 0x2A2810u;
label_2a2810:
    // 0x2a2810: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a2810u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2814: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2a2814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a2818: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x2a2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2a281c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A281Cu;
    {
        const bool branch_taken_0x2a281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A281Cu;
        // 0x2a2820: 0x8fa40194  lw          $a0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a281c) {
            ctx->pc = 0x2A2840u;
            goto label_2a2840;
        }
    }
    ctx->pc = 0x2A2824u;
    // 0x2a2824: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a2824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2828: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a2828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a282c: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A282Cu;
    SET_GPR_U32(ctx, 31, 0x2A2834u);
    ctx->pc = 0x2A2830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A282Cu;
    // 0x2a2830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A282Cu, 0x2A2834u)) {
        return;
    }
    ctx->pc = 0x2A2834u;
label_2a2834:
    // 0x2a2834: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2a2834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2a2838: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A2838u;
    {
        const bool branch_taken_0x2a2838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2838u;
        // 0x2a283c: 0xafa20194  sw          $v0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2838) {
            ctx->pc = 0x2A2864u;
            goto label_2a2864;
        }
    }
    ctx->pc = 0x2A2840u;
label_2a2840:
    // 0x2a2840: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a2840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2844: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A2844u;
    SET_GPR_U32(ctx, 31, 0x2A284Cu);
    ctx->pc = 0x2A2848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2844u;
    // 0x2a2848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A2844u, 0x2A284Cu)) {
        return;
    }
    ctx->pc = 0x2A284Cu;
label_2a284c:
    // 0x2a284c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x2a284cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a2850: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a2850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2854: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2a2854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x2a2858: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A2858u;
    SET_GPR_U32(ctx, 31, 0x2A2860u);
    ctx->pc = 0x2A285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2858u;
    // 0x2a285c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A2858u, 0x2A2860u)) {
        return;
    }
    ctx->pc = 0x2A2860u;
label_2a2860:
    // 0x2a2860: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2a2860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_2a2864:
    // 0x2a2864: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a2864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a2868:
    // 0x2a2868: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2a2868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a286c: 0xc0a85d6  jal         func_2A1758
    ctx->pc = 0x2A286Cu;
    SET_GPR_U32(ctx, 31, 0x2A2874u);
    ctx->pc = 0x2A2870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A286Cu;
    // 0x2a2870: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A1758u, 0x2A286Cu, 0x2A2874u)) {
        return;
    }
    ctx->pc = 0x2A2874u;
label_2a2874:
    // 0x2a2874: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x2a2874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2a2878: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x2a2878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a287c: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A287Cu;
    SET_GPR_U32(ctx, 31, 0x2A2884u);
    ctx->pc = 0x2A2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A287Cu;
    // 0x2a2880: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A287Cu, 0x2A2884u)) {
        return;
    }
    ctx->pc = 0x2A2884u;
label_2a2884:
    // 0x2a2884: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x2a2884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2a2888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a288c: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2a288cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a2890: 0xc0a809a  jal         func_2A0268
    ctx->pc = 0x2A2890u;
    SET_GPR_U32(ctx, 31, 0x2A2898u);
    ctx->pc = 0x2A2894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2890u;
    // 0x2a2894: 0x8fa60190  lw          $a2, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0268u, 0x2A2890u, 0x2A2898u)) {
        return;
    }
    ctx->pc = 0x2A2898u;
label_2a2898:
    // 0x2a2898: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2a2898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x2a289c: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x2a289cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2a28a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A28A0u;
    {
        const bool branch_taken_0x2a28a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28A0u;
        // 0x2a28a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28a0) {
            ctx->pc = 0x2A28B8u;
            goto label_2a28b8;
        }
    }
    ctx->pc = 0x2A28A8u;
    // 0x2a28a8: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x2a28a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2a28ac: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A28ACu;
    SET_GPR_U32(ctx, 31, 0x2A28B4u);
    ctx->pc = 0x2A28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28ACu;
    // 0x2a28b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A28ACu, 0x2A28B4u)) {
        return;
    }
    ctx->pc = 0x2A28B4u;
label_2a28b4:
    // 0x2a28b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a28b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a28b8:
    // 0x2a28b8: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A28B8u;
    {
        const bool branch_taken_0x2a28b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28B8u;
        // 0x2a28bc: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28b8) {
            ctx->pc = 0x2A28F0u;
            goto label_2a28f0;
        }
    }
    ctx->pc = 0x2A28C0u;
    // 0x2a28c0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A28C0u;
    {
        const bool branch_taken_0x2a28c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28C0u;
        // 0x2a28c4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28c0) {
            ctx->pc = 0x2A28F0u;
            goto label_2a28f0;
        }
    }
    ctx->pc = 0x2A28C8u;
    // 0x2a28c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a28c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a28cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a28ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a28d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a28d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a28d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A28D4u;
    {
        const bool branch_taken_0x2a28d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28D4u;
        // 0x2a28d8: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28d4) {
            ctx->pc = 0x2A28F0u;
            goto label_2a28f0;
        }
    }
    ctx->pc = 0x2A28DCu;
    // 0x2a28dc: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A28DCu;
    {
        const bool branch_taken_0x2a28dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28DCu;
        // 0x2a28e0: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28dc) {
            ctx->pc = 0x2A2980u;
            goto label_2a2980;
        }
    }
    ctx->pc = 0x2A28E4u;
    // 0x2a28e4: 0x529021  addu        $s2, $v0, $s2
    ctx->pc = 0x2a28e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a28e8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2A28E8u;
    {
        const bool branch_taken_0x2a28e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28E8u;
        // 0x2a28ec: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28e8) {
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A28F0u;
label_2a28f0:
    // 0x2a28f0: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A28F0u;
    {
        const bool branch_taken_0x2a28f0 = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x2a28f0) {
            ctx->pc = 0x2A291Cu;
            goto label_2a291c;
        }
    }
    ctx->pc = 0x2A28F8u;
    // 0x2a28f8: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A28F8u;
    {
        const bool branch_taken_0x2a28f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28F8u;
        // 0x2a28fc: 0x8fa20148  lw          $v0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28f8) {
            ctx->pc = 0x2A2970u;
            goto label_2a2970;
        }
    }
    ctx->pc = 0x2A2900u;
    // 0x2a2900: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A2900u;
    {
        const bool branch_taken_0x2a2900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2900u;
        // 0x2a2904: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2900) {
            ctx->pc = 0x2A2970u;
            goto label_2a2970;
        }
    }
    ctx->pc = 0x2A2908u;
    // 0x2a2908: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a2908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a290c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a290cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a2910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2914: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2914u;
    {
        const bool branch_taken_0x2a2914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2914) {
            ctx->pc = 0x2A2970u;
            goto label_2a2970;
        }
    }
    ctx->pc = 0x2A291Cu;
label_2a291c:
    // 0x2a291c: 0x1a200012  blez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A291Cu;
    {
        const bool branch_taken_0x2a291c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A291Cu;
        // 0x2a2920: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a291c) {
            ctx->pc = 0x2A2968u;
            goto label_2a2968;
        }
    }
    ctx->pc = 0x2A2924u;
    // 0x2a2924: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A2924u;
    SET_GPR_U32(ctx, 31, 0x2A292Cu);
    ctx->pc = 0x2A2928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2924u;
    // 0x2a2928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A2924u, 0x2A292Cu)) {
        return;
    }
    ctx->pc = 0x2A292Cu;
label_2a292c:
    // 0x2a292c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a292cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2930: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2a2930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a2934: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A2934u;
    SET_GPR_U32(ctx, 31, 0x2A293Cu);
    ctx->pc = 0x2A2938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2934u;
    // 0x2a2938: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A2934u, 0x2A293Cu)) {
        return;
    }
    ctx->pc = 0x2A293Cu;
label_2a293c:
    // 0x2a293c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a293cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2940: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2940u;
    {
        const bool branch_taken_0x2a2940 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x2A2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2940u;
        // 0x2a2944: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2940) {
            ctx->pc = 0x2A295Cu;
            goto label_2a295c;
        }
    }
    ctx->pc = 0x2A2948u;
    // 0x2a2948: 0x56200054  bnel        $s1, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x2A2948u;
    {
        const bool branch_taken_0x2a2948 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2948) {
            ctx->pc = 0x2A294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2948u;
            // 0x2a294c: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A2950u;
    // 0x2a2950: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2a2950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2a2954: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A2954u;
    {
        const bool branch_taken_0x2a2954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2954) {
            ctx->pc = 0x2A2958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2954u;
            // 0x2a2958: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A295Cu;
label_2a295c:
    // 0x2a295c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2a295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2a2960: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2960u;
    {
        const bool branch_taken_0x2a2960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2960u;
        // 0x2a2964: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2960) {
            ctx->pc = 0x2A2980u;
            goto label_2a2980;
        }
    }
    ctx->pc = 0x2A2968u;
label_2a2968:
    // 0x2a2968: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2A2968u;
    {
        const bool branch_taken_0x2a2968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2968u;
        // 0x2a296c: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2968) {
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A2970u;
label_2a2970:
    // 0x2a2970: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2970u;
    {
        const bool branch_taken_0x2a2970 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2970u;
        // 0x2a2974: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2970) {
            ctx->pc = 0x2A2998u;
            goto label_2a2998;
        }
    }
    ctx->pc = 0x2A2978u;
    // 0x2a2978: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2978u;
    {
        const bool branch_taken_0x2a2978 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2978u;
        // 0x2a297c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2978) {
            ctx->pc = 0x2A2990u;
            goto label_2a2990;
        }
    }
    ctx->pc = 0x2A2980u;
label_2a2980:
    // 0x2a2980: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2a2980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2a2984: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2a2984u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a2988: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2A2988u;
    {
        const bool branch_taken_0x2a2988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2988u;
        // 0x2a298c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2988) {
            ctx->pc = 0x2A2A30u;
            goto label_2a2a30;
        }
    }
    ctx->pc = 0x2A2990u;
label_2a2990:
    // 0x2a2990: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2A2990u;
    {
        const bool branch_taken_0x2a2990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2990u;
        // 0x2a2994: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2990) {
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A2998u;
label_2a2998:
    // 0x2a2998: 0xa2b20000  sb          $s2, 0x0($s5)
    ctx->pc = 0x2a2998u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x2a299c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2a299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a29a0: 0x1663ff97  bne         $s3, $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x2A29A0u;
    {
        const bool branch_taken_0x2a29a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29A0u;
        // 0x2a29a4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29a0) {
            ctx->pc = 0x2A2800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2800;
        }
    }
    ctx->pc = 0x2A29A8u;
    // 0x2a29a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A29A8u;
    {
        const bool branch_taken_0x2a29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29A8u;
        // 0x2a29ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29a8) {
            ctx->pc = 0x2A29F8u;
            goto label_2a29f8;
        }
    }
    ctx->pc = 0x2A29B0u;
label_2a29b0:
    // 0x2a29b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A29B0u;
    {
        const bool branch_taken_0x2a29b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29B0u;
        // 0x2a29b4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29b0) {
            ctx->pc = 0x2A29D0u;
            goto label_2a29d0;
        }
    }
    ctx->pc = 0x2A29B8u;
label_2a29b8:
    // 0x2a29b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a29c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a29c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29c4: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A29C4u;
    SET_GPR_U32(ctx, 31, 0x2A29CCu);
    ctx->pc = 0x2A29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29C4u;
    // 0x2a29c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A29C4u, 0x2A29CCu)) {
        return;
    }
    ctx->pc = 0x2A29CCu;
label_2a29cc:
    // 0x2a29cc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a29ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a29d0:
    // 0x2a29d0: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2a29d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a29d4: 0xc0a85d6  jal         func_2A1758
    ctx->pc = 0x2A29D4u;
    SET_GPR_U32(ctx, 31, 0x2A29DCu);
    ctx->pc = 0x2A29D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29D4u;
    // 0x2a29d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A1758u, 0x2A29D4u, 0x2A29DCu)) {
        return;
    }
    ctx->pc = 0x2A29DCu;
label_2a29dc:
    // 0x2a29dc: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x2a29dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a29e0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2a29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a29e4: 0xa2b20000  sb          $s2, 0x0($s5)
    ctx->pc = 0x2a29e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x2a29e8: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x2a29e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a29ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A29ECu;
    {
        const bool branch_taken_0x2a29ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29ECu;
        // 0x2a29f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29ec) {
            ctx->pc = 0x2A29B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a29b8;
        }
    }
    ctx->pc = 0x2A29F4u;
    // 0x2a29f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a29f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a29f8:
    // 0x2a29f8: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A29F8u;
    SET_GPR_U32(ctx, 31, 0x2A2A00u);
    ctx->pc = 0x2A29FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29F8u;
    // 0x2a29fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A29F8u, 0x2A2A00u)) {
        return;
    }
    ctx->pc = 0x2A2A00u;
label_2a2a00:
    // 0x2a2a00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a2a00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a04: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2a2a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a2a08: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A2A08u;
    SET_GPR_U32(ctx, 31, 0x2A2A10u);
    ctx->pc = 0x2A2A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A08u;
    // 0x2a2a0c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A2A08u, 0x2A2A10u)) {
        return;
    }
    ctx->pc = 0x2A2A10u;
label_2a2a10:
    // 0x2a2a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a14: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2A14u;
    {
        const bool branch_taken_0x2a2a14 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x2a2a14) {
            ctx->pc = 0x2A2A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2A14u;
            // 0x2a2a18: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2A34u;
            goto label_2a2a34;
        }
    }
    ctx->pc = 0x2A2A1Cu;
    // 0x2a2a1c: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A2A1Cu;
    {
        const bool branch_taken_0x2a2a1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A1Cu;
        // 0x2a2a20: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a1c) {
            ctx->pc = 0x2A2A80u;
            goto label_2a2a80;
        }
    }
    ctx->pc = 0x2A2A24u;
    // 0x2a2a24: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2a2a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2a2a28: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2A28u;
    {
        const bool branch_taken_0x2a2a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a28) {
            ctx->pc = 0x2A2A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2A28u;
            // 0x2a2a2c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2A84u;
            goto label_2a2a84;
        }
    }
    ctx->pc = 0x2A2A30u;
label_2a2a30:
    // 0x2a2a30: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2a2a30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2a2a34:
    // 0x2a2a34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2A34u;
    {
        const bool branch_taken_0x2a2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A34u;
        // 0x2a2a38: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a34) {
            ctx->pc = 0x2A2A4Cu;
            goto label_2a2a4c;
        }
    }
    ctx->pc = 0x2A2A3Cu;
    // 0x2a2a3c: 0x0  nop
    ctx->pc = 0x2a2a3cu;
    // NOP
label_2a2a40:
    // 0x2a2a40: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2a2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a2a44: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2A44u;
    {
        const bool branch_taken_0x2a2a44 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A44u;
        // 0x2a2a48: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a44) {
            ctx->pc = 0x2A2A64u;
            goto label_2a2a64;
        }
    }
    ctx->pc = 0x2A2A4Cu;
label_2a2a4c:
    // 0x2a2a4c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2a2a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a2a50: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A2A50u;
    {
        const bool branch_taken_0x2a2a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A50u;
        // 0x2a2a54: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a50) {
            ctx->pc = 0x2A2A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2a40;
        }
    }
    ctx->pc = 0x2A2A58u;
    // 0x2a2a58: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2a2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a2a5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A2A5Cu;
    {
        const bool branch_taken_0x2a2a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A5Cu;
        // 0x2a2a60: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a5c) {
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A2A64u;
label_2a2a64:
    // 0x2a2a64: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x2a2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a2a68: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a2a6c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a2a6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2a2a70: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x2a2a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a2a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A2A74u;
    {
        const bool branch_taken_0x2a2a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A74u;
        // 0x2a2a78: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a74) {
            ctx->pc = 0x2A2AA0u;
            goto label_2a2aa0;
        }
    }
    ctx->pc = 0x2A2A7Cu;
    // 0x2a2a7c: 0x0  nop
    ctx->pc = 0x2a2a7cu;
    // NOP
label_2a2a80:
    // 0x2a2a80: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2a2a80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2a2a84:
    // 0x2a2a84: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2a2a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a2a88: 0x0  nop
    ctx->pc = 0x2a2a88u;
    // NOP
    // 0x2a2a8c: 0x0  nop
    ctx->pc = 0x2a2a8cu;
    // NOP
    // 0x2a2a90: 0x0  nop
    ctx->pc = 0x2a2a90u;
    // NOP
    // 0x2a2a94: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A2A94u;
    {
        const bool branch_taken_0x2a2a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a2a94) {
            ctx->pc = 0x2A2A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2a80;
        }
    }
    ctx->pc = 0x2A2A9Cu;
label_2a2a9c:
    // 0x2a2a9c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a2a9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2a2aa0:
    // 0x2a2aa0: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A2AA0u;
    SET_GPR_U32(ctx, 31, 0x2A2AA8u);
    ctx->pc = 0x2A2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AA0u;
    // 0x2a2aa4: 0x8fa40188  lw          $a0, 0x188($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A2AA0u, 0x2A2AA8u)) {
        return;
    }
    ctx->pc = 0x2A2AA8u;
label_2a2aa8:
    // 0x2a2aa8: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A2AA8u;
    SET_GPR_U32(ctx, 31, 0x2A2AB0u);
    ctx->pc = 0x2A2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AA8u;
    // 0x2a2aac: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A2AA8u, 0x2A2AB0u)) {
        return;
    }
    ctx->pc = 0x2A2AB0u;
label_2a2ab0:
    // 0x2a2ab0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x2a2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a2ab4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2AB4u;
    {
        const bool branch_taken_0x2a2ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AB4u;
        // 0x2a2ab8: 0x8fa20194  lw          $v0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ab4) {
            ctx->pc = 0x2A2ADCu;
            goto label_2a2adc;
        }
    }
    ctx->pc = 0x2A2ABCu;
    // 0x2a2abc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2ABCu;
    {
        const bool branch_taken_0x2a2abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2abc) {
            ctx->pc = 0x2A2AD4u;
            goto label_2a2ad4;
        }
    }
    ctx->pc = 0x2A2AC4u;
    // 0x2a2ac4: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2AC4u;
    {
        const bool branch_taken_0x2a2ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a2ac4) {
            ctx->pc = 0x2A2AD4u;
            goto label_2a2ad4;
        }
    }
    ctx->pc = 0x2A2ACCu;
    // 0x2a2acc: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A2ACCu;
    SET_GPR_U32(ctx, 31, 0x2A2AD4u);
    ctx->pc = 0x2A2AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2ACCu;
    // 0x2a2ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A2ACCu, 0x2A2AD4u)) {
        return;
    }
    ctx->pc = 0x2A2AD4u;
label_2a2ad4:
    // 0x2a2ad4: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A2AD4u;
    SET_GPR_U32(ctx, 31, 0x2A2ADCu);
    ctx->pc = 0x2A2AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AD4u;
    // 0x2a2ad8: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A2AD4u, 0x2A2ADCu)) {
        return;
    }
    ctx->pc = 0x2A2ADCu;
label_2a2adc:
    // 0x2a2adc: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A2ADCu;
    SET_GPR_U32(ctx, 31, 0x2A2AE4u);
    ctx->pc = 0x2A2AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2ADCu;
    // 0x2a2ae0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A2ADCu, 0x2A2AE4u)) {
        return;
    }
    ctx->pc = 0x2A2AE4u;
label_2a2ae4:
    // 0x2a2ae4: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2a2ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2ae8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x2a2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a2aec: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x2a2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x2a2af0: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x2a2af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2a2af4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A2AF4u;
    {
        const bool branch_taken_0x2a2af4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2af4) {
            ctx->pc = 0x2A2AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2AF4u;
            // 0x2a2af8: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2AFCu;
            goto label_2a2afc;
        }
    }
    ctx->pc = 0x2A2AFCu;
label_2a2afc:
    // 0x2a2afc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2a2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2a2b00:
    // 0x2a2b00: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x2a2b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2a2b04: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x2a2b04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a2b08: 0xdfb70220  ld          $s7, 0x220($sp)
    ctx->pc = 0x2a2b08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2a2b0c: 0xdfb60210  ld          $s6, 0x210($sp)
    ctx->pc = 0x2a2b0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2a2b10: 0xdfb50200  ld          $s5, 0x200($sp)
    ctx->pc = 0x2a2b10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2a2b14: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x2a2b14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a2b18: 0xdfb301e0  ld          $s3, 0x1E0($sp)
    ctx->pc = 0x2a2b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a2b1c: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x2a2b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2a2b20: 0xdfb101c0  ld          $s1, 0x1C0($sp)
    ctx->pc = 0x2a2b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2a2b24: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x2a2b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a2b28: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B28u;
        // 0x2a2b2c: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2B30u;
}
