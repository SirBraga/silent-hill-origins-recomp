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

// Function: sub_002FA9A8
// Address: 0x2fa9a8 - 0x2fae80
void sub_002FA9A8_0x2fa9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA9A8_0x2fa9a8");
#endif

    switch (ctx->pc) {
        case 0x2fa9f4u: goto label_2fa9f4;
        case 0x2faa20u: goto label_2faa20;
        case 0x2faa60u: goto label_2faa60;
        case 0x2faa88u: goto label_2faa88;
        case 0x2faac8u: goto label_2faac8;
        case 0x2faae4u: goto label_2faae4;
        case 0x2faaecu: goto label_2faaec;
        case 0x2fab28u: goto label_2fab28;
        case 0x2fab68u: goto label_2fab68;
        case 0x2fab8cu: goto label_2fab8c;
        case 0x2fabd0u: goto label_2fabd0;
        case 0x2fac2cu: goto label_2fac2c;
        case 0x2fac38u: goto label_2fac38;
        case 0x2fac60u: goto label_2fac60;
        case 0x2fac94u: goto label_2fac94;
        case 0x2fac9cu: goto label_2fac9c;
        case 0x2faca8u: goto label_2faca8;
        case 0x2facb8u: goto label_2facb8;
        case 0x2facf8u: goto label_2facf8;
        case 0x2fad18u: goto label_2fad18;
        case 0x2fad3cu: goto label_2fad3c;
        case 0x2fad80u: goto label_2fad80;
        case 0x2faddcu: goto label_2faddc;
        case 0x2fade8u: goto label_2fade8;
        case 0x2fae10u: goto label_2fae10;
        case 0x2fae44u: goto label_2fae44;
        case 0x2fae58u: goto label_2fae58;
        default: break;
    }

    ctx->pc = 0x2fa9a8u;

    // 0x2fa9a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2fa9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2fa9ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2fa9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa9b0: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2fa9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2fa9b4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2fa9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2fa9b8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2fa9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2fa9bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fa9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9c0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2fa9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2fa9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9c8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2fa9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2fa9cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fa9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9d0: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2fa9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2fa9d4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2fa9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2fa9d8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2fa9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2fa9dc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2fa9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2fa9e0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fa9e4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2fa9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x2fa9e8: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x2fa9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x2fa9ec: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FA9ECu;
    SET_GPR_U32(ctx, 31, 0x2FA9F4u);
    ctx->pc = 0x2FA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA9ECu;
    // 0x2fa9f0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FA9ECu, 0x2FA9F4u)) {
        return;
    }
    ctx->pc = 0x2FA9F4u;
label_2fa9f4:
    // 0x2fa9f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fa9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa9f8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fa9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fa9fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fa9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2faa00: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2faa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2faa04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAA04u;
    {
        const bool branch_taken_0x2faa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA04u;
        // 0x2faa08: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa04) {
            ctx->pc = 0x2FAA14u;
            goto label_2faa14;
        }
    }
    ctx->pc = 0x2FAA0Cu;
    // 0x2faa0c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x2faa0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x2faa10: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x2faa10u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_2faa14:
    // 0x2faa14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2faa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2faa18: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x2faa18u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2faa1c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2faa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_2faa20:
    // 0x2faa20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2faa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2faa24: 0x0  nop
    ctx->pc = 0x2faa24u;
    // NOP
    // 0x2faa28: 0x0  nop
    ctx->pc = 0x2faa28u;
    // NOP
    // 0x2faa2c: 0x0  nop
    ctx->pc = 0x2faa2cu;
    // NOP
    // 0x2faa30: 0x0  nop
    ctx->pc = 0x2faa30u;
    // NOP
    // 0x2faa34: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FAA34u;
    {
        const bool branch_taken_0x2faa34 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2faa34) {
            ctx->pc = 0x2FAA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2faa20;
        }
    }
    ctx->pc = 0x2FAA3Cu;
    // 0x2faa3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2faa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2faa40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2faa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2faa44: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2faa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2faa48: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2faa48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2faa4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2faa4cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0)); // MMIO: 0x10002000
    // 0x2faa50: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x2faa50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x2faa54: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x2faa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x2faa58: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x2faa58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x2faa5c: 0x0  nop
    ctx->pc = 0x2faa5cu;
    // NOP
label_2faa60:
    // 0x2faa60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2faa60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10002010
    // 0x2faa64: 0x0  nop
    ctx->pc = 0x2faa64u;
    // NOP
    // 0x2faa68: 0x0  nop
    ctx->pc = 0x2faa68u;
    // NOP
    // 0x2faa6c: 0x0  nop
    ctx->pc = 0x2faa6cu;
    // NOP
    // 0x2faa70: 0x0  nop
    ctx->pc = 0x2faa70u;
    // NOP
    // 0x2faa74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FAA74u;
    {
        const bool branch_taken_0x2faa74 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2faa74) {
            ctx->pc = 0x2FAA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2faa60;
        }
    }
    ctx->pc = 0x2FAA7Cu;
    // 0x2faa7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2faa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa80: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2FAA80u;
    SET_GPR_U32(ctx, 31, 0x2FAA88u);
    ctx->pc = 0x2FAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA80u;
    // 0x2faa84: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2FAA80u, 0x2FAA88u)) {
        return;
    }
    ctx->pc = 0x2FAA88u;
label_2faa88:
    // 0x2faa88: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2faa88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x2faa8c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2faa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2faa90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2faa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2faa94: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2faa94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2faa98: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x2faa98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2faa9c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2faa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2faaa0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2faaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2faaa4: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x2faaa4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2faaa8: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2FAAA8u;
    {
        const bool branch_taken_0x2faaa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAA8u;
        // 0x2faaac: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faaa8) {
            ctx->pc = 0x2FACB0u;
            goto label_2facb0;
        }
    }
    ctx->pc = 0x2FAAB0u;
    // 0x2faab0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2faab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2faab4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2faab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2faab8: 0x24a5afc8  addiu       $a1, $a1, -0x5038
    ctx->pc = 0x2faab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946760));
    // 0x2faabc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2faabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faac0: 0xc0c8410  jal         func_321040
    ctx->pc = 0x2FAAC0u;
    SET_GPR_U32(ctx, 31, 0x2FAAC8u);
    ctx->pc = 0x2FAAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAC0u;
    // 0x2faac4: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321040u, 0x2FAAC0u, 0x2FAAC8u)) {
        return;
    }
    ctx->pc = 0x2FAAC8u;
label_2faac8:
    // 0x2faac8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2faac8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faacc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2faaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2faad0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2faad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2faad4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2faad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2faad8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x2faad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x2faadc: 0xc0c87a4  jal         func_321E90
    ctx->pc = 0x2FAADCu;
    SET_GPR_U32(ctx, 31, 0x2FAAE4u);
    ctx->pc = 0x2FAAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAADCu;
    // 0x2faae0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E90u, 0x2FAADCu, 0x2FAAE4u)) {
        return;
    }
    ctx->pc = 0x2FAAE4u;
label_2faae4:
    // 0x2faae4: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2FAAE4u;
    SET_GPR_U32(ctx, 31, 0x2FAAECu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2FAAE4u, 0x2FAAECu)) {
        return;
    }
    ctx->pc = 0x2FAAECu;
label_2faaec:
    // 0x2faaec: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2faaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2faaf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2faaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2faaf4: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x2faaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x2faaf8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2faaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2faafc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2faafcu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 5)); // MMIO: 0x1000b410
    // 0x2fab00: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x2fab00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x2fab04: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x2fab04u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 20)); // MMIO: 0x1000b420
    // 0x2fab08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fab08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fab0c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x2fab0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x2fab10: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x2fab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2fab14: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fab14u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x2fab18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAB18u;
    {
        const bool branch_taken_0x2fab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB18u;
        // 0x2fab1c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab18) {
            ctx->pc = 0x2FAB2Cu;
            goto label_2fab2c;
        }
    }
    ctx->pc = 0x2FAB20u;
    // 0x2fab20: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2FAB20u;
    SET_GPR_U32(ctx, 31, 0x2FAB28u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2FAB20u, 0x2FAB28u)) {
        return;
    }
    ctx->pc = 0x2FAB28u;
label_2fab28:
    // 0x2fab28: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2fab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2fab2c:
    // 0x2fab2c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2fab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2fab30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2fab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fab34: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2fab34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2fab38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fab3c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2fab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2fab40: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x2fab40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2fab44: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2fab44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2fab48: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x2FAB48u;
    {
        const bool branch_taken_0x2fab48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB48u;
        // 0x2fab4c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab48) {
            ctx->pc = 0x2FAC84u;
            goto label_2fac84;
        }
    }
    ctx->pc = 0x2FAB50u;
    // 0x2fab50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fab50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fab54: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x2fab54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2fab58: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2fab58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fab5c: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x2fab5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2fab60: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fab60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fab64: 0x0  nop
    ctx->pc = 0x2fab64u;
    // NOP
label_2fab68:
    // 0x2fab68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fab6c: 0x0  nop
    ctx->pc = 0x2fab6cu;
    // NOP
    // 0x2fab70: 0x0  nop
    ctx->pc = 0x2fab70u;
    // NOP
    // 0x2fab74: 0x0  nop
    ctx->pc = 0x2fab74u;
    // NOP
    // 0x2fab78: 0x0  nop
    ctx->pc = 0x2fab78u;
    // NOP
    // 0x2fab7c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FAB7Cu;
    {
        const bool branch_taken_0x2fab7c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fab7c) {
            ctx->pc = 0x2FAB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fab68;
        }
    }
    ctx->pc = 0x2FAB84u;
    // 0x2fab84: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2FAB84u;
    SET_GPR_U32(ctx, 31, 0x2FAB8Cu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2FAB84u, 0x2FAB8Cu)) {
        return;
    }
    ctx->pc = 0x2FAB8Cu;
label_2fab8c:
    // 0x2fab8c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2fab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2fab90: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2fab90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2fab94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fab98: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x2fab98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x2fab9c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x2fab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2faba0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2faba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2faba4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2faba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2faba8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x2faba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x2fabac: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x2fabacu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x2fabb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fabb4: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x2fabb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x2fabb8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2fabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2fabbc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fabbcu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x2fabc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FABC0u;
    {
        const bool branch_taken_0x2fabc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABC0u;
        // 0x2fabc4: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabc0) {
            ctx->pc = 0x2FABD4u;
            goto label_2fabd4;
        }
    }
    ctx->pc = 0x2FABC8u;
    // 0x2fabc8: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2FABC8u;
    SET_GPR_U32(ctx, 31, 0x2FABD0u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2FABC8u, 0x2FABD0u)) {
        return;
    }
    ctx->pc = 0x2FABD0u;
label_2fabd0:
    // 0x2fabd0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2fabd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_2fabd4:
    // 0x2fabd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fabd8: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x2fabd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2fabdc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2fabdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2fabe0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fabe0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2fabe4: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x2fabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x2fabe8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fabe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fabec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2fabecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2fabf0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FABF0u;
    {
        const bool branch_taken_0x2fabf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABF0u;
        // 0x2fabf4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabf0) {
            ctx->pc = 0x2FAC0Cu;
            goto label_2fac0c;
        }
    }
    ctx->pc = 0x2FABF8u;
    // 0x2fabf8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2fabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2fabfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FABFCu;
    {
        const bool branch_taken_0x2fabfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABFCu;
        // 0x2fac00: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabfc) {
            ctx->pc = 0x2FAC0Cu;
            goto label_2fac0c;
        }
    }
    ctx->pc = 0x2FAC04u;
    // 0x2fac04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAC04u;
    {
        const bool branch_taken_0x2fac04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC04u;
        // 0x2fac08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac04) {
            ctx->pc = 0x2FAC14u;
            goto label_2fac14;
        }
    }
    ctx->pc = 0x2FAC0Cu;
label_2fac0c:
    // 0x2fac0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAC0Cu;
    {
        const bool branch_taken_0x2fac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC0Cu;
        // 0x2fac10: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac0c) {
            ctx->pc = 0x2FAC18u;
            goto label_2fac18;
        }
    }
    ctx->pc = 0x2FAC14u;
label_2fac14:
    // 0x2fac14: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x2fac14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_2fac18:
    // 0x2fac18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fac1c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2fac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x2fac20: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fac20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2fac24: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FAC24u;
    SET_GPR_U32(ctx, 31, 0x2FAC2Cu);
    ctx->pc = 0x2FAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC24u;
    // 0x2fac28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FAC24u, 0x2FAC2Cu)) {
        return;
    }
    ctx->pc = 0x2FAC2Cu;
label_2fac2c:
    // 0x2fac2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fac30: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x2fac30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x2fac34: 0x0  nop
    ctx->pc = 0x2fac34u;
    // NOP
label_2fac38:
    // 0x2fac38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fac38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x2fac3c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2fac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2fac40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fac44: 0x0  nop
    ctx->pc = 0x2fac44u;
    // NOP
    // 0x2fac48: 0x0  nop
    ctx->pc = 0x2fac48u;
    // NOP
    // 0x2fac4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FAC4Cu;
    {
        const bool branch_taken_0x2fac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fac4c) {
            ctx->pc = 0x2FAC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fac38;
        }
    }
    ctx->pc = 0x2FAC54u;
    // 0x2fac54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fac58: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fac5c: 0x0  nop
    ctx->pc = 0x2fac5cu;
    // NOP
label_2fac60:
    // 0x2fac60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fac60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x2fac64: 0x0  nop
    ctx->pc = 0x2fac64u;
    // NOP
    // 0x2fac68: 0x0  nop
    ctx->pc = 0x2fac68u;
    // NOP
    // 0x2fac6c: 0x0  nop
    ctx->pc = 0x2fac6cu;
    // NOP
    // 0x2fac70: 0x0  nop
    ctx->pc = 0x2fac70u;
    // NOP
    // 0x2fac74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FAC74u;
    {
        const bool branch_taken_0x2fac74 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fac74) {
            ctx->pc = 0x2FAC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fac60;
        }
    }
    ctx->pc = 0x2FAC7Cu;
    // 0x2fac7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAC7Cu;
    {
        const bool branch_taken_0x2fac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac7c) {
            ctx->pc = 0x2FAC94u;
            goto label_2fac94;
        }
    }
    ctx->pc = 0x2FAC84u;
label_2fac84:
    // 0x2fac84: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x2fac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2fac88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fac88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac8c: 0xc0be9fa  jal         func_2FA7E8
    ctx->pc = 0x2FAC8Cu;
    SET_GPR_U32(ctx, 31, 0x2FAC94u);
    ctx->pc = 0x2FAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC8Cu;
    // 0x2fac90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA7E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA7E8u, 0x2FAC8Cu, 0x2FAC94u)) {
        return;
    }
    ctx->pc = 0x2FAC94u;
label_2fac94:
    // 0x2fac94: 0xc0c878a  jal         func_321E28
    ctx->pc = 0x2FAC94u;
    SET_GPR_U32(ctx, 31, 0x2FAC9Cu);
    ctx->pc = 0x2FAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC94u;
    // 0x2fac98: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E28u, 0x2FAC94u, 0x2FAC9Cu)) {
        return;
    }
    ctx->pc = 0x2FAC9Cu;
label_2fac9c:
    // 0x2fac9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2fac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faca0: 0xc0c8414  jal         func_321050
    ctx->pc = 0x2FACA0u;
    SET_GPR_U32(ctx, 31, 0x2FACA8u);
    ctx->pc = 0x2FACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACA0u;
    // 0x2faca4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321050u, 0x2FACA0u, 0x2FACA8u)) {
        return;
    }
    ctx->pc = 0x2FACA8u;
label_2faca8:
    // 0x2faca8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2FACA8u;
    {
        const bool branch_taken_0x2faca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACA8u;
        // 0x2facac: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faca8) {
            ctx->pc = 0x2FAE48u;
            goto label_2fae48;
        }
    }
    ctx->pc = 0x2FACB0u;
label_2facb0:
    // 0x2facb0: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2FACB0u;
    SET_GPR_U32(ctx, 31, 0x2FACB8u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2FACB0u, 0x2FACB8u)) {
        return;
    }
    ctx->pc = 0x2FACB8u;
label_2facb8:
    // 0x2facb8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2facb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2facbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2facbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2facc0: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x2facc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x2facc4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2facc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2facc8: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x2facc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x2faccc: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x2facccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x2facd0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2facd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2facd4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2facd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2facd8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x2facd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x2facdc: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x2facdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2face0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2face0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2face4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2face4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2face8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FACE8u;
    {
        const bool branch_taken_0x2face8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACE8u;
        // 0x2facec: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2face8) {
            ctx->pc = 0x2FACF8u;
            goto label_2facf8;
        }
    }
    ctx->pc = 0x2FACF0u;
    // 0x2facf0: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2FACF0u;
    SET_GPR_U32(ctx, 31, 0x2FACF8u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2FACF0u, 0x2FACF8u)) {
        return;
    }
    ctx->pc = 0x2FACF8u;
label_2facf8:
    // 0x2facf8: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x2FACF8u;
    {
        const bool branch_taken_0x2facf8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACF8u;
        // 0x2facfc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facf8) {
            ctx->pc = 0x2FAE34u;
            goto label_2fae34;
        }
    }
    ctx->pc = 0x2FAD00u;
    // 0x2fad00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fad00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fad04: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x2fad04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2fad08: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2fad08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fad0c: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x2fad0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2fad10: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fad14: 0x0  nop
    ctx->pc = 0x2fad14u;
    // NOP
label_2fad18:
    // 0x2fad18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fad1c: 0x0  nop
    ctx->pc = 0x2fad1cu;
    // NOP
    // 0x2fad20: 0x0  nop
    ctx->pc = 0x2fad20u;
    // NOP
    // 0x2fad24: 0x0  nop
    ctx->pc = 0x2fad24u;
    // NOP
    // 0x2fad28: 0x0  nop
    ctx->pc = 0x2fad28u;
    // NOP
    // 0x2fad2c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FAD2Cu;
    {
        const bool branch_taken_0x2fad2c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fad2c) {
            ctx->pc = 0x2FAD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fad18;
        }
    }
    ctx->pc = 0x2FAD34u;
    // 0x2fad34: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2FAD34u;
    SET_GPR_U32(ctx, 31, 0x2FAD3Cu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2FAD34u, 0x2FAD3Cu)) {
        return;
    }
    ctx->pc = 0x2FAD3Cu;
label_2fad3c:
    // 0x2fad3c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2fad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2fad40: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2fad40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2fad44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fad44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fad48: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x2fad48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x2fad4c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x2fad4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2fad50: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2fad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2fad54: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2fad54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2fad58: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x2fad58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x2fad5c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x2fad5cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x2fad60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fad64: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x2fad64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x2fad68: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2fad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2fad6c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fad6cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x2fad70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAD70u;
    {
        const bool branch_taken_0x2fad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD70u;
        // 0x2fad74: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad70) {
            ctx->pc = 0x2FAD84u;
            goto label_2fad84;
        }
    }
    ctx->pc = 0x2FAD78u;
    // 0x2fad78: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2FAD78u;
    SET_GPR_U32(ctx, 31, 0x2FAD80u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2FAD78u, 0x2FAD80u)) {
        return;
    }
    ctx->pc = 0x2FAD80u;
label_2fad80:
    // 0x2fad80: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2fad80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_2fad84:
    // 0x2fad84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fad88: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x2fad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2fad8c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2fad8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2fad90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fad90u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2fad94: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x2fad94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x2fad98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fad98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fad9c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2fad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2fada0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FADA0u;
    {
        const bool branch_taken_0x2fada0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADA0u;
        // 0x2fada4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fada0) {
            ctx->pc = 0x2FADBCu;
            goto label_2fadbc;
        }
    }
    ctx->pc = 0x2FADA8u;
    // 0x2fada8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2fada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2fadac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FADACu;
    {
        const bool branch_taken_0x2fadac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADACu;
        // 0x2fadb0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadac) {
            ctx->pc = 0x2FADBCu;
            goto label_2fadbc;
        }
    }
    ctx->pc = 0x2FADB4u;
    // 0x2fadb4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FADB4u;
    {
        const bool branch_taken_0x2fadb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADB4u;
        // 0x2fadb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadb4) {
            ctx->pc = 0x2FADC4u;
            goto label_2fadc4;
        }
    }
    ctx->pc = 0x2FADBCu;
label_2fadbc:
    // 0x2fadbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FADBCu;
    {
        const bool branch_taken_0x2fadbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADBCu;
        // 0x2fadc0: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadbc) {
            ctx->pc = 0x2FADC8u;
            goto label_2fadc8;
        }
    }
    ctx->pc = 0x2FADC4u;
label_2fadc4:
    // 0x2fadc4: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x2fadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_2fadc8:
    // 0x2fadc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fadcc: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2fadccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x2fadd0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2fadd4: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FADD4u;
    SET_GPR_U32(ctx, 31, 0x2FADDCu);
    ctx->pc = 0x2FADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADD4u;
    // 0x2fadd8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FADD4u, 0x2FADDCu)) {
        return;
    }
    ctx->pc = 0x2FADDCu;
label_2faddc:
    // 0x2faddc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2faddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fade0: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x2fade0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x2fade4: 0x0  nop
    ctx->pc = 0x2fade4u;
    // NOP
label_2fade8:
    // 0x2fade8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fade8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x2fadec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2fadecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2fadf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fadf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fadf4: 0x0  nop
    ctx->pc = 0x2fadf4u;
    // NOP
    // 0x2fadf8: 0x0  nop
    ctx->pc = 0x2fadf8u;
    // NOP
    // 0x2fadfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FADFCu;
    {
        const bool branch_taken_0x2fadfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fadfc) {
            ctx->pc = 0x2FADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fade8;
        }
    }
    ctx->pc = 0x2FAE04u;
    // 0x2fae04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fae04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fae08: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fae08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fae0c: 0x0  nop
    ctx->pc = 0x2fae0cu;
    // NOP
label_2fae10:
    // 0x2fae10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fae10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x2fae14: 0x0  nop
    ctx->pc = 0x2fae14u;
    // NOP
    // 0x2fae18: 0x0  nop
    ctx->pc = 0x2fae18u;
    // NOP
    // 0x2fae1c: 0x0  nop
    ctx->pc = 0x2fae1cu;
    // NOP
    // 0x2fae20: 0x0  nop
    ctx->pc = 0x2fae20u;
    // NOP
    // 0x2fae24: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FAE24u;
    {
        const bool branch_taken_0x2fae24 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fae24) {
            ctx->pc = 0x2FAE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fae10;
        }
    }
    ctx->pc = 0x2FAE2Cu;
    // 0x2fae2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAE2Cu;
    {
        const bool branch_taken_0x2fae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE2Cu;
        // 0x2fae30: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae2c) {
            ctx->pc = 0x2FAE48u;
            goto label_2fae48;
        }
    }
    ctx->pc = 0x2FAE34u;
label_2fae34:
    // 0x2fae34: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x2fae34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2fae38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fae38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae3c: 0xc0be9fa  jal         func_2FA7E8
    ctx->pc = 0x2FAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2FAE44u);
    ctx->pc = 0x2FAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE3Cu;
    // 0x2fae40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA7E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA7E8u, 0x2FAE3Cu, 0x2FAE44u)) {
        return;
    }
    ctx->pc = 0x2FAE44u;
label_2fae44:
    // 0x2fae44: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2fae44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_2fae48:
    // 0x2fae48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fae4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fae50: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FAE50u;
    SET_GPR_U32(ctx, 31, 0x2FAE58u);
    ctx->pc = 0x2FAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE50u;
    // 0x2fae54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FAE50u, 0x2FAE58u)) {
        return;
    }
    ctx->pc = 0x2FAE58u;
label_2fae58:
    // 0x2fae58: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2fae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fae5c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2fae5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fae60: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2fae60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fae64: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2fae64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fae68: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2fae68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fae6c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2fae6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fae70: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2fae70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fae74: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2fae74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fae78: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE78u;
        // 0x2fae7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAE80u;
}
