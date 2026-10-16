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

// Function: sub_0026D4B8
// Address: 0x26d4b8 - 0x26d5e0
void sub_0026D4B8_0x26d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D4B8_0x26d4b8");
#endif

    switch (ctx->pc) {
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d568u: goto label_26d568;
        case 0x26d578u: goto label_26d578;
        case 0x26d594u: goto label_26d594;
        case 0x26d5a4u: goto label_26d5a4;
        default: break;
    }

    ctx->pc = 0x26d4b8u;

    // 0x26d4b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26d4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26d4bc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x26d4bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26d4c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x26d4c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x26d4c4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26d4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26d4c8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26d4cc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x26d4ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26d4d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26d4d4: 0xc09c1d2  jal         func_270748
    ctx->pc = 0x26D4D4u;
    SET_GPR_U32(ctx, 31, 0x26D4DCu);
    ctx->pc = 0x26D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4D4u;
    // 0x26d4d8: 0x3c11006b  lui         $s1, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270748u, 0x26D4D4u, 0x26D4DCu)) {
        return;
    }
    ctx->pc = 0x26D4DCu;
label_26d4dc:
    // 0x26d4dc: 0x8e30cb58  lw          $s0, -0x34A8($s1)
    ctx->pc = 0x26d4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953816)));
    // 0x26d4e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d4e4: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x26D4E4u;
    {
        const bool branch_taken_0x26d4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4E4u;
        // 0x26d4e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4e4) {
            ctx->pc = 0x26D5ACu;
            goto label_26d5ac;
        }
    }
    ctx->pc = 0x26D4ECu;
    // 0x26d4ec: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26D4ECu;
    SET_GPR_U32(ctx, 31, 0x26D4F4u);
    ctx->pc = 0x26D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4ECu;
    // 0x26d4f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26D4ECu, 0x26D4F4u)) {
        return;
    }
    ctx->pc = 0x26D4F4u;
label_26d4f4:
    // 0x26d4f4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26D4F4u;
    {
        const bool branch_taken_0x26d4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4F4u;
        // 0x26d4f8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4f4) {
            ctx->pc = 0x26D5B0u;
            goto label_26d5b0;
        }
    }
    ctx->pc = 0x26D4FCu;
    // 0x26d4fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d500: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26d500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d504: 0x0  nop
    ctx->pc = 0x26d504u;
    // NOP
    // 0x26d508: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x26D508u;
    {
        const bool branch_taken_0x26d508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D508u;
        // 0x26d50c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d508) {
            ctx->pc = 0x26D5ACu;
            goto label_26d5ac;
        }
    }
    ctx->pc = 0x26D510u;
    // 0x26d510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d514: 0x2442bb98  addiu       $v0, $v0, -0x4468
    ctx->pc = 0x26d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x26d518: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d51c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26d520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d524: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D524u;
    SET_GPR_U32(ctx, 31, 0x26D52Cu);
    ctx->pc = 0x26D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D524u;
    // 0x26d528: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D524u, 0x26D52Cu)) {
        return;
    }
    ctx->pc = 0x26D52Cu;
label_26d52c:
    // 0x26d52c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26d530: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D530u;
    {
        const bool branch_taken_0x26d530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D530u;
        // 0x26d534: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d530) {
            ctx->pc = 0x26D544u;
            goto label_26d544;
        }
    }
    ctx->pc = 0x26D538u;
    // 0x26d538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d53c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26D53Cu;
    {
        const bool branch_taken_0x26d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D53Cu;
        // 0x26d540: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d53c) {
            ctx->pc = 0x26D550u;
            goto label_26d550;
        }
    }
    ctx->pc = 0x26D544u;
label_26d544:
    // 0x26d544: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26d548: 0xdc43bba0  ld          $v1, -0x4460($v0)
    ctx->pc = 0x26d548u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6ABBA0u));
    // 0x26d54c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x26d54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_26d550:
    // 0x26d550: 0x8e23cb58  lw          $v1, -0x34A8($s1)
    ctx->pc = 0x26d550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953816)));
    // 0x26d554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d558: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D558u;
    {
        const bool branch_taken_0x26d558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d558) {
            ctx->pc = 0x26D570u;
            goto label_26d570;
        }
    }
    ctx->pc = 0x26D560u;
    // 0x26d560: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26D560u;
    SET_GPR_U32(ctx, 31, 0x26D568u);
    ctx->pc = 0x26D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D560u;
    // 0x26d564: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26D560u, 0x26D568u)) {
        return;
    }
    ctx->pc = 0x26D568u;
label_26d568:
    // 0x26d568: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D568u;
    {
        const bool branch_taken_0x26d568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D568u;
        // 0x26d56c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d568) {
            ctx->pc = 0x26D584u;
            goto label_26d584;
        }
    }
    ctx->pc = 0x26D570u;
label_26d570:
    // 0x26d570: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D570u;
    SET_GPR_U32(ctx, 31, 0x26D578u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D570u, 0x26D578u)) {
        return;
    }
    ctx->pc = 0x26D578u;
label_26d578:
    // 0x26d578: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x26d578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x26d57c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26d580: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26d584:
    // 0x26d584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D584u;
    {
        const bool branch_taken_0x26d584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d584) {
            ctx->pc = 0x26D59Cu;
            goto label_26d59c;
        }
    }
    ctx->pc = 0x26D58Cu;
    // 0x26d58c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D58Cu;
    SET_GPR_U32(ctx, 31, 0x26D594u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D58Cu, 0x26D594u)) {
        return;
    }
    ctx->pc = 0x26D594u;
label_26d594:
    // 0x26d594: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d598: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26d59c:
    // 0x26d59c: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x26D59Cu;
    SET_GPR_U32(ctx, 31, 0x26D5A4u);
    ctx->pc = 0x26D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D59Cu;
    // 0x26d5a0: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x26D59Cu, 0x26D5A4u)) {
        return;
    }
    ctx->pc = 0x26D5A4u;
label_26d5a4:
    // 0x26d5a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26D5A4u;
    {
        const bool branch_taken_0x26d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5A4u;
        // 0x26d5a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5a4) {
            ctx->pc = 0x26D5B4u;
            goto label_26d5b4;
        }
    }
    ctx->pc = 0x26D5ACu;
label_26d5ac:
    // 0x26d5ac: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x26d5acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_26d5b0:
    // 0x26d5b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26d5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26d5b4:
    // 0x26d5b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26d5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d5b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26d5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d5bc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x26d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26d5c0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x26d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26d5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x26D5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5C4u;
        // 0x26d5c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D5CCu;
    // 0x26d5cc: 0x0  nop
    ctx->pc = 0x26d5ccu;
    // NOP
    // 0x26d5d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26d5d4: 0x0  nop
    ctx->pc = 0x26d5d4u;
    // NOP
    // 0x26d5d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26d5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26d5dc: 0x0  nop
    ctx->pc = 0x26d5dcu;
    // NOP
    ctx->pc = 0x26d5e0u;
}
