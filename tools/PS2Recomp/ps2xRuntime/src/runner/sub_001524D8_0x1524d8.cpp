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

// Function: sub_001524D8
// Address: 0x1524d8 - 0x1525f0
void sub_001524D8_0x1524d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001524D8_0x1524d8");
#endif

    switch (ctx->pc) {
        case 0x1524f4u: goto label_1524f4;
        case 0x152580u: goto label_152580;
        default: break;
    }

    ctx->pc = 0x1524d8u;

    // 0x1524d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1524d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1524dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1524dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1524e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1524e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1524e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1524e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1524e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1524ec: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1524ECu;
    SET_GPR_U32(ctx, 31, 0x1524F4u);
    ctx->pc = 0x1524F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524ECu;
    // 0x1524f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1524ECu, 0x1524F4u)) {
        return;
    }
    ctx->pc = 0x1524F4u;
label_1524f4:
    // 0x1524f4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1524f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1524f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1524fc: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1524fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x152500: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x152500u;
    {
        const bool branch_taken_0x152500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x152504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152500u;
        // 0x152504: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152500) {
            ctx->pc = 0x152568u;
            goto label_152568;
        }
    }
    ctx->pc = 0x152508u;
    // 0x152508: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x152508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x15250c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15250cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152510: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152510u;
    {
        const bool branch_taken_0x152510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152510u;
        // 0x152514: 0xc6210048  lwc1        $f1, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152510) {
            ctx->pc = 0x152524u;
            goto label_152524;
        }
    }
    ctx->pc = 0x152518u;
    // 0x152518: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x152518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15251c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15251Cu;
    {
        const bool branch_taken_0x15251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15251Cu;
        // 0x152520: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15251c) {
            ctx->pc = 0x15252Cu;
            goto label_15252c;
        }
    }
    ctx->pc = 0x152524u;
label_152524:
    // 0x152524: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x152524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152528: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x152528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_15252c:
    // 0x15252c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x15252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x152530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x152530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152534: 0x0  nop
    ctx->pc = 0x152534u;
    // NOP
    // 0x152538: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x152538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15253c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15253cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152540: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x152540u;
    {
        const bool branch_taken_0x152540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152540u;
        // 0x152544: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152540) {
            ctx->pc = 0x152550u;
            goto label_152550;
        }
    }
    ctx->pc = 0x152548u;
    // 0x152548: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x152548u;
    {
        const bool branch_taken_0x152548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152548u;
        // 0x15254c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152548) {
            ctx->pc = 0x152560u;
            goto label_152560;
        }
    }
    ctx->pc = 0x152550u;
label_152550:
    // 0x152550: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x152550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152554: 0x0  nop
    ctx->pc = 0x152554u;
    // NOP
    // 0x152558: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x152558u;
    {
        const bool branch_taken_0x152558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152558) {
            ctx->pc = 0x15255Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152558u;
            // 0x15255c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x152560u;
            goto label_152560;
        }
    }
    ctx->pc = 0x152560u;
label_152560:
    // 0x152560: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x152560u;
    {
        const bool branch_taken_0x152560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152560u;
        // 0x152564: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152560) {
            ctx->pc = 0x1525D8u;
            goto label_1525d8;
        }
    }
    ctx->pc = 0x152568u;
label_152568:
    // 0x152568: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x152568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
    // 0x15256c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15256Cu;
    {
        const bool branch_taken_0x15256c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x152570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15256Cu;
        // 0x152570: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15256c) {
            ctx->pc = 0x152588u;
            goto label_152588;
        }
    }
    ctx->pc = 0x152574u;
    // 0x152574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152578: 0xc0549a6  jal         func_152698
    ctx->pc = 0x152578u;
    SET_GPR_U32(ctx, 31, 0x152580u);
    ctx->pc = 0x15257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152578u;
    // 0x15257c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152698u, 0x152578u, 0x152580u)) {
        return;
    }
    ctx->pc = 0x152580u;
label_152580:
    // 0x152580: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x152580u;
    {
        const bool branch_taken_0x152580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152580u;
        // 0x152584: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152580) {
            ctx->pc = 0x1525DCu;
            goto label_1525dc;
        }
    }
    ctx->pc = 0x152588u;
label_152588:
    // 0x152588: 0x8c434548  lw          $v1, 0x4548($v0)
    ctx->pc = 0x152588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17736)));
    // 0x15258c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15258Cu;
    {
        const bool branch_taken_0x15258c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x152590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15258Cu;
        // 0x152590: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15258c) {
            ctx->pc = 0x1525A0u;
            goto label_1525a0;
        }
    }
    ctx->pc = 0x152594u;
    // 0x152594: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x152594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152598: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x152598u;
    {
        const bool branch_taken_0x152598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152598u;
        // 0x15259c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152598) {
            ctx->pc = 0x1525D8u;
            goto label_1525d8;
        }
    }
    ctx->pc = 0x1525A0u;
label_1525a0:
    // 0x1525a0: 0x8c43eff8  lw          $v1, -0x1008($v0)
    ctx->pc = 0x1525a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963192)));
    // 0x1525a4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1525A4u;
    {
        const bool branch_taken_0x1525a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1525A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525A4u;
        // 0x1525a8: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525a4) {
            ctx->pc = 0x1525B8u;
            goto label_1525b8;
        }
    }
    ctx->pc = 0x1525ACu;
    // 0x1525ac: 0x8c43efe8  lw          $v1, -0x1018($v0)
    ctx->pc = 0x1525acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963176)));
    // 0x1525b0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1525B0u;
    {
        const bool branch_taken_0x1525b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1525B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525B0u;
        // 0x1525b4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525b0) {
            ctx->pc = 0x1525C4u;
            goto label_1525c4;
        }
    }
    ctx->pc = 0x1525B8u;
label_1525b8:
    // 0x1525b8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1525b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1525bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1525BCu;
    {
        const bool branch_taken_0x1525bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525BCu;
        // 0x1525c0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525bc) {
            ctx->pc = 0x1525D8u;
            goto label_1525d8;
        }
    }
    ctx->pc = 0x1525C4u;
label_1525c4:
    // 0x1525c4: 0x8c43eff0  lw          $v1, -0x1010($v0)
    ctx->pc = 0x1525c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963184)));
    // 0x1525c8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1525C8u;
    {
        const bool branch_taken_0x1525c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1525CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525C8u;
        // 0x1525cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525c8) {
            ctx->pc = 0x1525DCu;
            goto label_1525dc;
        }
    }
    ctx->pc = 0x1525D0u;
    // 0x1525d0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1525d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1525d4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1525d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_1525d8:
    // 0x1525d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1525d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1525dc:
    // 0x1525dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1525dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1525e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1525e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1525e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1525E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1525E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525E4u;
        // 0x1525e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1525E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1525ECu;
    // 0x1525ec: 0x0  nop
    ctx->pc = 0x1525ecu;
    // NOP
    ctx->pc = 0x1525f0u;
}
