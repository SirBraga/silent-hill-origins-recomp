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

// Function: sub_00190560
// Address: 0x190560 - 0x190648
void sub_00190560_0x190560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190560_0x190560");
#endif

    switch (ctx->pc) {
        case 0x190594u: goto label_190594;
        case 0x190628u: goto label_190628;
        default: break;
    }

    ctx->pc = 0x190560u;

    // 0x190560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190564: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190568: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19056c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x19056cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190570: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190574: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x190574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190578: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19057c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190584: 0x2645002c  addiu       $a1, $s2, 0x2C
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x190588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x190588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19058c: 0xc063616  jal         func_18D858
    ctx->pc = 0x19058Cu;
    SET_GPR_U32(ctx, 31, 0x190594u);
    ctx->pc = 0x190590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19058Cu;
    // 0x190590: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x19058Cu, 0x190594u)) {
        return;
    }
    ctx->pc = 0x190594u;
label_190594:
    // 0x190594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190598: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x190598u;
    {
        const bool branch_taken_0x190598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190598u;
        // 0x19059c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190598) {
            ctx->pc = 0x190620u;
            goto label_190620;
        }
    }
    ctx->pc = 0x1905A0u;
    // 0x1905a0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1905a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1905a4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1905a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1905a8: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x1905a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1905ac: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1905ACu;
    {
        const bool branch_taken_0x1905ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1905B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905ACu;
        // 0x1905b0: 0xae040054  sw          $a0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905ac) {
            ctx->pc = 0x1905C8u;
            goto label_1905c8;
        }
    }
    ctx->pc = 0x1905B4u;
    // 0x1905b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1905b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1905b8: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1905B8u;
    {
        const bool branch_taken_0x1905b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1905b8) {
            ctx->pc = 0x1905BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1905B8u;
            // 0x1905bc: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1905DCu;
            goto label_1905dc;
        }
    }
    ctx->pc = 0x1905C0u;
    // 0x1905c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1905C0u;
    {
        const bool branch_taken_0x1905c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905c0) {
            ctx->pc = 0x190620u;
            goto label_190620;
        }
    }
    ctx->pc = 0x1905C8u;
label_1905c8:
    // 0x1905c8: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1905c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1905cc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1905ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1905d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1905d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1905d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1905D4u;
    {
        const bool branch_taken_0x1905d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905D4u;
        // 0x1905d8: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905d4) {
            ctx->pc = 0x190620u;
            goto label_190620;
        }
    }
    ctx->pc = 0x1905DCu;
label_1905dc:
    // 0x1905dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1905dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1905e0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1905e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1905e4: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1905e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1905e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1905E8u;
    {
        const bool branch_taken_0x1905e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1905ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905E8u;
        // 0x1905ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905e8) {
            ctx->pc = 0x190604u;
            goto label_190604;
        }
    }
    ctx->pc = 0x1905F0u;
    // 0x1905f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1905f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1905f4: 0x0  nop
    ctx->pc = 0x1905f4u;
    // NOP
    // 0x1905f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1905f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1905fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1905FCu;
    {
        const bool branch_taken_0x1905fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905FCu;
        // 0x190600: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905fc) {
            ctx->pc = 0x190620u;
            goto label_190620;
        }
    }
    ctx->pc = 0x190604u;
label_190604:
    // 0x190604: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190608: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19060c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19060cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190610: 0x0  nop
    ctx->pc = 0x190610u;
    // NOP
    // 0x190614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190618: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x19061c: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x19061cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_190620:
    // 0x190620: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190620u;
    SET_GPR_U32(ctx, 31, 0x190628u);
    ctx->pc = 0x190624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190620u;
    // 0x190624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190620u, 0x190628u)) {
        return;
    }
    ctx->pc = 0x190628u;
label_190628:
    // 0x190628: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19062c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19062cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190630: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190634: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19063c: 0x3e00008  jr          $ra
    ctx->pc = 0x19063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19063Cu;
        // 0x190640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190644u;
    // 0x190644: 0x0  nop
    ctx->pc = 0x190644u;
    // NOP
    ctx->pc = 0x190648u;
}
