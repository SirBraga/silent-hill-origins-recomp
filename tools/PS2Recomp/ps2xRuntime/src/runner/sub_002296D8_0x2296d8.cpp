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

// Function: sub_002296D8
// Address: 0x2296d8 - 0x2297d0
void sub_002296D8_0x2296d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002296D8_0x2296d8");
#endif

    switch (ctx->pc) {
        case 0x229704u: goto label_229704;
        case 0x229720u: goto label_229720;
        case 0x22973cu: goto label_22973c;
        case 0x229750u: goto label_229750;
        case 0x229764u: goto label_229764;
        case 0x229780u: goto label_229780;
        case 0x22979cu: goto label_22979c;
        case 0x2297a4u: goto label_2297a4;
        case 0x2297b0u: goto label_2297b0;
        default: break;
    }

    ctx->pc = 0x2296d8u;

    // 0x2296d8: 0x27bdbba0  addiu       $sp, $sp, -0x4460
    ctx->pc = 0x2296d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294949792));
    // 0x2296dc: 0x7fb14440  sq          $s1, 0x4440($sp)
    ctx->pc = 0x2296dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17472), GPR_VEC(ctx, 17));
    // 0x2296e0: 0x7fb24430  sq          $s2, 0x4430($sp)
    ctx->pc = 0x2296e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17456), GPR_VEC(ctx, 18));
    // 0x2296e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2296e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296e8: 0x7fb34420  sq          $s3, 0x4420($sp)
    ctx->pc = 0x2296e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17440), GPR_VEC(ctx, 19));
    // 0x2296ec: 0x27b20400  addiu       $s2, $sp, 0x400
    ctx->pc = 0x2296ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2296f0: 0x7fb04450  sq          $s0, 0x4450($sp)
    ctx->pc = 0x2296f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17488), GPR_VEC(ctx, 16));
    // 0x2296f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2296f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296f8: 0xffbf4410  sd          $ra, 0x4410($sp)
    ctx->pc = 0x2296f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 17424), GPR_U64(ctx, 31));
    // 0x2296fc: 0xc08b470  jal         func_22D1C0
    ctx->pc = 0x2296FCu;
    SET_GPR_U32(ctx, 31, 0x229704u);
    ctx->pc = 0x229700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296FCu;
    // 0x229700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D1C0u, 0x2296FCu, 0x229704u)) {
        return;
    }
    ctx->pc = 0x229704u;
label_229704:
    // 0x229704: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x229704u;
    {
        const bool branch_taken_0x229704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229704u;
        // 0x229708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229704) {
            ctx->pc = 0x2297B4u;
            goto label_2297b4;
        }
    }
    ctx->pc = 0x22970Cu;
    // 0x22970c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22970cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229710: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x229710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229718: 0xc08afbc  jal         func_22BEF0
    ctx->pc = 0x229718u;
    SET_GPR_U32(ctx, 31, 0x229720u);
    ctx->pc = 0x22971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229718u;
    // 0x22971c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BEF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BEF0u, 0x229718u, 0x229720u)) {
        return;
    }
    ctx->pc = 0x229720u;
label_229720:
    // 0x229720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x229724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229728: 0x2652814  dsllv       $a1, $a1, $s3
    ctx->pc = 0x229728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x22972c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x22972cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x229730: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x229730u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x229734: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x229734u;
    SET_GPR_U32(ctx, 31, 0x22973Cu);
    ctx->pc = 0x229738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229734u;
    // 0x229738: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CB00u, 0x229734u, 0x22973Cu)) {
        return;
    }
    ctx->pc = 0x22973Cu;
label_22973c:
    // 0x22973c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x229740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x229740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229744: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x229748: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x229748u;
    SET_GPR_U32(ctx, 31, 0x229750u);
    ctx->pc = 0x22974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229748u;
    // 0x22974c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x229748u, 0x229750u)) {
        return;
    }
    ctx->pc = 0x229750u;
label_229750:
    // 0x229750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229754: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x229754u;
    {
        const bool branch_taken_0x229754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229754u;
        // 0x229758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229754) {
            ctx->pc = 0x2297B4u;
            goto label_2297b4;
        }
    }
    ctx->pc = 0x22975Cu;
    // 0x22975c: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x22975Cu;
    SET_GPR_U32(ctx, 31, 0x229764u);
    ctx->pc = 0x229760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22975Cu;
    // 0x229760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x22975Cu, 0x229764u)) {
        return;
    }
    ctx->pc = 0x229764u;
label_229764:
    // 0x229764: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x229764u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x229768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22976c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x22976cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229770: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x229770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229774: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x229774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x229778: 0xc08b374  jal         func_22CDD0
    ctx->pc = 0x229778u;
    SET_GPR_U32(ctx, 31, 0x229780u);
    ctx->pc = 0x22977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229778u;
    // 0x22977c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CDD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CDD0u, 0x229778u, 0x229780u)) {
        return;
    }
    ctx->pc = 0x229780u;
label_229780:
    // 0x229780: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x229780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x229784: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x229784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x229788: 0x2663014  dsllv       $a2, $a2, $s3
    ctx->pc = 0x229788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x22978c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x22978cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x229790: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x229790u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x229794: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x229794u;
    SET_GPR_U32(ctx, 31, 0x22979Cu);
    ctx->pc = 0x229798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229794u;
    // 0x229798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x229794u, 0x22979Cu)) {
        return;
    }
    ctx->pc = 0x22979Cu;
label_22979c:
    // 0x22979c: 0xc089b96  jal         func_226E58
    ctx->pc = 0x22979Cu;
    SET_GPR_U32(ctx, 31, 0x2297A4u);
    ctx->pc = 0x2297A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22979Cu;
    // 0x2297a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22979Cu, 0x2297A4u)) {
        return;
    }
    ctx->pc = 0x2297A4u;
label_2297a4:
    // 0x2297a4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2297a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2297a8: 0xc08b4d2  jal         func_22D348
    ctx->pc = 0x2297A8u;
    SET_GPR_U32(ctx, 31, 0x2297B0u);
    ctx->pc = 0x2297ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297A8u;
    // 0x2297ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D348u, 0x2297A8u, 0x2297B0u)) {
        return;
    }
    ctx->pc = 0x2297B0u;
label_2297b0:
    // 0x2297b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2297b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2297b4:
    // 0x2297b4: 0x7bb04450  lq          $s0, 0x4450($sp)
    ctx->pc = 0x2297b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 17488)));
    // 0x2297b8: 0x7bb14440  lq          $s1, 0x4440($sp)
    ctx->pc = 0x2297b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 17472)));
    // 0x2297bc: 0x7bb24430  lq          $s2, 0x4430($sp)
    ctx->pc = 0x2297bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 17456)));
    // 0x2297c0: 0x7bb34420  lq          $s3, 0x4420($sp)
    ctx->pc = 0x2297c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 17440)));
    // 0x2297c4: 0xdfbf4410  ld          $ra, 0x4410($sp)
    ctx->pc = 0x2297c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 17424)));
    // 0x2297c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2297C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297C8u;
        // 0x2297cc: 0x27bd4460  addiu       $sp, $sp, 0x4460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 17504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2297C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2297D0u;
}
