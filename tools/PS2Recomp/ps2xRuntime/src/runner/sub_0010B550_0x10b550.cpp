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

// Function: sub_0010B550
// Address: 0x10b550 - 0x10b660
void sub_0010B550_0x10b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B550_0x10b550");
#endif

    switch (ctx->pc) {
        case 0x10b56cu: goto label_10b56c;
        case 0x10b580u: goto label_10b580;
        case 0x10b598u: goto label_10b598;
        case 0x10b5ccu: goto label_10b5cc;
        case 0x10b5fcu: goto label_10b5fc;
        case 0x10b63cu: goto label_10b63c;
        default: break;
    }

    ctx->pc = 0x10b550u;

    // 0x10b550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b554: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10b554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10b558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10b558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10b55c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b564: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x10B564u;
    SET_GPR_U32(ctx, 31, 0x10B56Cu);
    ctx->pc = 0x10B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B564u;
    // 0x10b568: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x10B564u, 0x10B56Cu)) {
        return;
    }
    ctx->pc = 0x10B56Cu;
label_10b56c:
    // 0x10b56c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x10b570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b574: 0x8c464300  lw          $a2, 0x4300($v0)
    ctx->pc = 0x10b574u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4300u));
    // 0x10b578: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x10B578u;
    SET_GPR_U32(ctx, 31, 0x10B580u);
    ctx->pc = 0x10B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B578u;
    // 0x10b57c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x10B578u, 0x10B580u)) {
        return;
    }
    ctx->pc = 0x10B580u;
label_10b580:
    // 0x10b580: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b584: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b588: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x10B588u;
    {
        const bool branch_taken_0x10b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B588u;
        // 0x10b58c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b588) {
            ctx->pc = 0x10B650u;
            goto label_10b650;
        }
    }
    ctx->pc = 0x10B590u;
    // 0x10b590: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b594: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10b598:
    // 0x10b598: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x10b598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x10b59c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x10B59Cu;
    {
        const bool branch_taken_0x10b59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B59Cu;
        // 0x10b5a0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b59c) {
            ctx->pc = 0x10B620u;
            goto label_10b620;
        }
    }
    ctx->pc = 0x10B5A4u;
    // 0x10b5a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10b5a8: 0x24429db0  addiu       $v0, $v0, -0x6250
    ctx->pc = 0x10b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942128));
    // 0x10b5ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b5b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b5b4: 0x800008  jr          $a0
    ctx->pc = 0x10B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B5BCu: goto label_10b5bc;
            case 0x10B5D4u: goto label_10b5d4;
            case 0x10B5E4u: goto label_10b5e4;
            case 0x10B604u: goto label_10b604;
            case 0x10B614u: goto label_10b614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10B5BCu;
label_10b5bc:
    // 0x10b5bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5c4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x10B5C4u;
    SET_GPR_U32(ctx, 31, 0x10B5CCu);
    ctx->pc = 0x10B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5C4u;
    // 0x10b5c8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x10B5C4u, 0x10B5CCu)) {
        return;
    }
    ctx->pc = 0x10B5CCu;
label_10b5cc:
    // 0x10b5cc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10B5CCu;
    {
        const bool branch_taken_0x10b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5CCu;
        // 0x10b5d0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5cc) {
            ctx->pc = 0x10B620u;
            goto label_10b620;
        }
    }
    ctx->pc = 0x10B5D4u;
label_10b5d4:
    // 0x10b5d4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10b5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5d8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x10b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x10b5dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B5DCu;
    {
        const bool branch_taken_0x10b5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5DCu;
        // 0x10b5e0: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5dc) {
            ctx->pc = 0x10B5F0u;
            goto label_10b5f0;
        }
    }
    ctx->pc = 0x10B5E4u;
label_10b5e4:
    // 0x10b5e4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10b5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5e8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x10b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x10b5ec: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x10b5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_10b5f0:
    // 0x10b5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5f4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x10B5F4u;
    SET_GPR_U32(ctx, 31, 0x10B5FCu);
    ctx->pc = 0x10B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5F4u;
    // 0x10b5f8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x10B5F4u, 0x10B5FCu)) {
        return;
    }
    ctx->pc = 0x10B5FCu;
label_10b5fc:
    // 0x10b5fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10B5FCu;
    {
        const bool branch_taken_0x10b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5FCu;
        // 0x10b600: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5fc) {
            ctx->pc = 0x10B624u;
            goto label_10b624;
        }
    }
    ctx->pc = 0x10B604u;
label_10b604:
    // 0x10b604: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10b604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b608: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b60c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B60Cu;
    {
        const bool branch_taken_0x10b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B60Cu;
        // 0x10b610: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b60c) {
            ctx->pc = 0x10B620u;
            goto label_10b620;
        }
    }
    ctx->pc = 0x10B614u;
label_10b614:
    // 0x10b614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b618: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b61c: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x10b61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_10b620:
    // 0x10b620: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10b620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10b624:
    // 0x10b624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b62c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b630: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b634: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x10B634u;
    SET_GPR_U32(ctx, 31, 0x10B63Cu);
    ctx->pc = 0x10B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B634u;
    // 0x10b638: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x10B634u, 0x10B63Cu)) {
        return;
    }
    ctx->pc = 0x10B63Cu;
label_10b63c:
    // 0x10b63c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b640: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b644: 0x5460ffd4  bnel        $v1, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x10B644u;
    {
        const bool branch_taken_0x10b644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b644) {
            ctx->pc = 0x10B648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B644u;
            // 0x10b648: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b598;
        }
    }
    ctx->pc = 0x10B64Cu;
    // 0x10b64c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10b64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10b650:
    // 0x10b650: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10b650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b658: 0x3e00008  jr          $ra
    ctx->pc = 0x10B658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B658u;
        // 0x10b65c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B660u;
}
