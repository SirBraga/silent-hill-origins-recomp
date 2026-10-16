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

// Function: sub_00258CA8
// Address: 0x258ca8 - 0x258e30
void sub_00258CA8_0x258ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258CA8_0x258ca8");
#endif

    switch (ctx->pc) {
        case 0x258d0cu: goto label_258d0c;
        case 0x258d14u: goto label_258d14;
        case 0x258d38u: goto label_258d38;
        case 0x258d4cu: goto label_258d4c;
        case 0x258d68u: goto label_258d68;
        case 0x258d78u: goto label_258d78;
        case 0x258d98u: goto label_258d98;
        case 0x258db0u: goto label_258db0;
        case 0x258ddcu: goto label_258ddc;
        default: break;
    }

    ctx->pc = 0x258ca8u;

    // 0x258ca8: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x258ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x258cac: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x258cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x258cb0: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x258cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x258cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cb8: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x258cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x258cbc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x258cbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cc0: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x258cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x258cc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x258cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cc8: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x258cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x258ccc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x258cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x258cd0: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x258cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x258cd4: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x258cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x258cd8: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x258cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x258cdc: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x258cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x258ce0: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x258ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x258ce4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x258ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x258ce8: 0xafa50420  sw          $a1, 0x420($sp)
    ctx->pc = 0x258ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 5));
    // 0x258cec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x258cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cf0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x258cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x258cf4: 0xafa70424  sw          $a3, 0x424($sp)
    ctx->pc = 0x258cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 7));
    // 0x258cf8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x258cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x258cfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x258cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x258d00: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x258d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x258d04: 0xc092782  jal         func_249E08
    ctx->pc = 0x258D04u;
    SET_GPR_U32(ctx, 31, 0x258D0Cu);
    ctx->pc = 0x258D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D04u;
    // 0x258d08: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x258D04u, 0x258D0Cu)) {
        return;
    }
    ctx->pc = 0x258D0Cu;
label_258d0c:
    // 0x258d0c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x258D0Cu;
    {
        const bool branch_taken_0x258d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258d0c) {
            ctx->pc = 0x258D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258D0Cu;
            // 0x258d10: 0x96150004  lhu         $s5, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258D1Cu;
            goto label_258d1c;
        }
    }
    ctx->pc = 0x258D14u;
label_258d14:
    // 0x258d14: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x258D14u;
    {
        const bool branch_taken_0x258d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D14u;
        // 0x258d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d14) {
            ctx->pc = 0x258DFCu;
            goto label_258dfc;
        }
    }
    ctx->pc = 0x258D1Cu;
label_258d1c:
    // 0x258d1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x258d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x258d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x258d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x258d24: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x258d24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x258d28: 0x12a20033  beq         $s5, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x258D28u;
    {
        const bool branch_taken_0x258d28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x258D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D28u;
        // 0x258d2c: 0x26140010  addiu       $s4, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d28) {
            ctx->pc = 0x258DF8u;
            goto label_258df8;
        }
    }
    ctx->pc = 0x258D30u;
    // 0x258d30: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x258d30u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x258d34: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x258d34u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
label_258d38:
    // 0x258d38: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x258d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x258d3c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x258d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x258d40: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x258d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x258d44: 0xc0960e0  jal         func_258380
    ctx->pc = 0x258D44u;
    SET_GPR_U32(ctx, 31, 0x258D4Cu);
    ctx->pc = 0x258D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D44u;
    // 0x258d48: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258380u, 0x258D44u, 0x258D4Cu)) {
        return;
    }
    ctx->pc = 0x258D4Cu;
label_258d4c:
    // 0x258d4c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x258D4Cu;
    {
        const bool branch_taken_0x258d4c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x258D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D4Cu;
        // 0x258d50: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d4c) {
            ctx->pc = 0x258D58u;
            goto label_258d58;
        }
    }
    ctx->pc = 0x258D54u;
    // 0x258d54: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x258d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_258d58:
    // 0x258d58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x258d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d5c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x258d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x258d60: 0xc092782  jal         func_249E08
    ctx->pc = 0x258D60u;
    SET_GPR_U32(ctx, 31, 0x258D68u);
    ctx->pc = 0x258D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D60u;
    // 0x258d64: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x258D60u, 0x258D68u)) {
        return;
    }
    ctx->pc = 0x258D68u;
label_258d68:
    // 0x258d68: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x258D68u;
    {
        const bool branch_taken_0x258d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D68u;
        // 0x258d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d68) {
            ctx->pc = 0x258DFCu;
            goto label_258dfc;
        }
    }
    ctx->pc = 0x258D70u;
    // 0x258d70: 0xc096314  jal         func_258C50
    ctx->pc = 0x258D70u;
    SET_GPR_U32(ctx, 31, 0x258D78u);
    ctx->pc = 0x258D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D70u;
    // 0x258d74: 0x8fa40420  lw          $a0, 0x420($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258C50u, 0x258D70u, 0x258D78u)) {
        return;
    }
    ctx->pc = 0x258D78u;
label_258d78:
    // 0x258d78: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x258D78u;
    {
        const bool branch_taken_0x258d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258d78) {
            ctx->pc = 0x258D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258D78u;
            // 0x258d7c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D80u;
    // 0x258d80: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x258d80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x258d84: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x258D84u;
    {
        const bool branch_taken_0x258d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D84u;
        // 0x258d88: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d84) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x258D8Cu;
    // 0x258d8c: 0x24170100  addiu       $s7, $zero, 0x100
    ctx->pc = 0x258d8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x258d90: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x258d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258d94: 0x2e220101  sltiu       $v0, $s1, 0x101
    ctx->pc = 0x258d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_258d98:
    // 0x258d98: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x258d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d9c: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x258d9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
    // 0x258da0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x258DA0u;
    {
        const bool branch_taken_0x258da0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DA0u;
        // 0x258da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258da0) {
            ctx->pc = 0x258DCCu;
            goto label_258dcc;
        }
    }
    ctx->pc = 0x258DA8u;
    // 0x258da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x258da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dac: 0x0  nop
    ctx->pc = 0x258dacu;
    // NOP
label_258db0:
    // 0x258db0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x258db0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x258db4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x258db8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x258db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x258dbc: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x258dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x258dc0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x258dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x258dc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x258DC4u;
    {
        const bool branch_taken_0x258dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DC4u;
        // 0x258dc8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dc4) {
            ctx->pc = 0x258DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258db0;
        }
    }
    ctx->pc = 0x258DCCu;
label_258dcc:
    // 0x258dcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x258dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x258dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dd4: 0xc092782  jal         func_249E08
    ctx->pc = 0x258DD4u;
    SET_GPR_U32(ctx, 31, 0x258DDCu);
    ctx->pc = 0x258DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DD4u;
    // 0x258dd8: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x258DD4u, 0x258DDCu)) {
        return;
    }
    ctx->pc = 0x258DDCu;
label_258ddc:
    // 0x258ddc: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x258DDCu;
    {
        const bool branch_taken_0x258ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DDCu;
        // 0x258de0: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ddc) {
            ctx->pc = 0x258D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258d14;
        }
    }
    ctx->pc = 0x258DE4u;
    // 0x258de4: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x258DE4u;
    {
        const bool branch_taken_0x258de4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x258DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DE4u;
        // 0x258de8: 0x2e220101  sltiu       $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258de4) {
            ctx->pc = 0x258D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258d98;
        }
    }
    ctx->pc = 0x258DECu;
label_258dec:
    // 0x258dec: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x258decu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_258df0:
    // 0x258df0: 0x16beffd1  bne         $s5, $fp, . + 4 + (-0x2F << 2)
    ctx->pc = 0x258DF0u;
    {
        const bool branch_taken_0x258df0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x258DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DF0u;
        // 0x258df4: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258df0) {
            ctx->pc = 0x258D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258d38;
        }
    }
    ctx->pc = 0x258DF8u;
label_258df8:
    // 0x258df8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x258df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_258dfc:
    // 0x258dfc: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x258dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x258e00: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x258e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x258e04: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x258e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x258e08: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x258e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x258e0c: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x258e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x258e10: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x258e10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x258e14: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x258e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x258e18: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x258e18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x258e1c: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x258e1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x258e20: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x258e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x258e24: 0x3e00008  jr          $ra
    ctx->pc = 0x258E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E24u;
        // 0x258e28: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258E2Cu;
    // 0x258e2c: 0x0  nop
    ctx->pc = 0x258e2cu;
    // NOP
    ctx->pc = 0x258e30u;
}
