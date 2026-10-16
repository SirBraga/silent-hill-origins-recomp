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

// Function: sub_0012B7A8
// Address: 0x12b7a8 - 0x12b8e0
void sub_0012B7A8_0x12b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B7A8_0x12b7a8");
#endif

    switch (ctx->pc) {
        case 0x12b7a8u: goto label_12b7a8;
        case 0x12b7acu: goto label_12b7ac;
        case 0x12b7b0u: goto label_12b7b0;
        case 0x12b7b4u: goto label_12b7b4;
        case 0x12b7b8u: goto label_12b7b8;
        case 0x12b7bcu: goto label_12b7bc;
        case 0x12b7c0u: goto label_12b7c0;
        case 0x12b7c4u: goto label_12b7c4;
        case 0x12b7c8u: goto label_12b7c8;
        case 0x12b7ccu: goto label_12b7cc;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b7d4u: goto label_12b7d4;
        case 0x12b7d8u: goto label_12b7d8;
        case 0x12b7dcu: goto label_12b7dc;
        case 0x12b7e0u: goto label_12b7e0;
        case 0x12b7e4u: goto label_12b7e4;
        case 0x12b7e8u: goto label_12b7e8;
        case 0x12b7ecu: goto label_12b7ec;
        case 0x12b7f0u: goto label_12b7f0;
        case 0x12b7f4u: goto label_12b7f4;
        case 0x12b7f8u: goto label_12b7f8;
        case 0x12b7fcu: goto label_12b7fc;
        case 0x12b800u: goto label_12b800;
        case 0x12b804u: goto label_12b804;
        case 0x12b808u: goto label_12b808;
        case 0x12b80cu: goto label_12b80c;
        case 0x12b810u: goto label_12b810;
        case 0x12b814u: goto label_12b814;
        case 0x12b818u: goto label_12b818;
        case 0x12b81cu: goto label_12b81c;
        case 0x12b820u: goto label_12b820;
        case 0x12b824u: goto label_12b824;
        case 0x12b828u: goto label_12b828;
        case 0x12b82cu: goto label_12b82c;
        case 0x12b830u: goto label_12b830;
        case 0x12b834u: goto label_12b834;
        case 0x12b838u: goto label_12b838;
        case 0x12b83cu: goto label_12b83c;
        case 0x12b840u: goto label_12b840;
        case 0x12b844u: goto label_12b844;
        case 0x12b848u: goto label_12b848;
        case 0x12b84cu: goto label_12b84c;
        case 0x12b850u: goto label_12b850;
        case 0x12b854u: goto label_12b854;
        case 0x12b858u: goto label_12b858;
        case 0x12b85cu: goto label_12b85c;
        case 0x12b860u: goto label_12b860;
        case 0x12b864u: goto label_12b864;
        case 0x12b868u: goto label_12b868;
        case 0x12b86cu: goto label_12b86c;
        case 0x12b870u: goto label_12b870;
        case 0x12b874u: goto label_12b874;
        case 0x12b878u: goto label_12b878;
        case 0x12b87cu: goto label_12b87c;
        case 0x12b880u: goto label_12b880;
        case 0x12b884u: goto label_12b884;
        case 0x12b888u: goto label_12b888;
        case 0x12b88cu: goto label_12b88c;
        case 0x12b890u: goto label_12b890;
        case 0x12b894u: goto label_12b894;
        case 0x12b898u: goto label_12b898;
        case 0x12b89cu: goto label_12b89c;
        case 0x12b8a0u: goto label_12b8a0;
        case 0x12b8a4u: goto label_12b8a4;
        case 0x12b8a8u: goto label_12b8a8;
        case 0x12b8acu: goto label_12b8ac;
        case 0x12b8b0u: goto label_12b8b0;
        case 0x12b8b4u: goto label_12b8b4;
        case 0x12b8b8u: goto label_12b8b8;
        case 0x12b8bcu: goto label_12b8bc;
        case 0x12b8c0u: goto label_12b8c0;
        case 0x12b8c4u: goto label_12b8c4;
        case 0x12b8c8u: goto label_12b8c8;
        case 0x12b8ccu: goto label_12b8cc;
        case 0x12b8d0u: goto label_12b8d0;
        case 0x12b8d4u: goto label_12b8d4;
        case 0x12b8d8u: goto label_12b8d8;
        case 0x12b8dcu: goto label_12b8dc;
        default: break;
    }

    ctx->pc = 0x12b7a8u;

label_12b7a8:
    // 0x12b7a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_12b7ac:
    // 0x12b7ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_12b7b0:
    // 0x12b7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12b7b4:
    // 0x12b7b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b7b8:
    // 0x12b7b8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x12b7b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12b7bc:
    // 0x12b7bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12b7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b7c0:
    // 0x12b7c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x12b7c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12b7c4:
    // 0x12b7c4: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x12b7c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_12b7c8:
    // 0x12b7c8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x12b7c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_12b7cc:
    // 0x12b7cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12b7d0:
    // 0x12b7d0: 0xc049248  jal         func_124920
label_12b7d4:
    if (ctx->pc == 0x12B7D4u) {
        ctx->pc = 0x12B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D0u;
        // 0x12b7d4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7D8u;
        goto label_12b7d8;
    }
    ctx->pc = 0x12B7D0u;
    SET_GPR_U32(ctx, 31, 0x12B7D8u);
    ctx->pc = 0x12B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7D0u;
    // 0x12b7d4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124920u, 0x12B7D0u, 0x12B7D8u)) {
        return;
    }
    ctx->pc = 0x12B7D8u;
label_12b7d8:
    // 0x12b7d8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_12b7dc:
    // 0x12b7dc: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x12b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_12b7e0:
    // 0x12b7e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_12b7e4:
    // 0x12b7e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_12b7e8:
    // 0x12b7e8: 0x40f809  jalr        $v0
label_12b7ec:
    if (ctx->pc == 0x12B7ECu) {
        ctx->pc = 0x12B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7E8u;
        // 0x12b7ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7F0u;
        goto label_12b7f0;
    }
    ctx->pc = 0x12B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B7F0u);
        ctx->pc = 0x12B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7E8u;
        // 0x12b7ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B7E8u, 0x12B7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B7F0u;
label_12b7f0:
    // 0x12b7f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12b7f4:
    if (ctx->pc == 0x12B7F4u) {
        ctx->pc = 0x12B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7F0u;
        // 0x12b7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7F8u;
        goto label_12b7f8;
    }
    ctx->pc = 0x12B7F0u;
    {
        const bool branch_taken_0x12b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7F0u;
        // 0x12b7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7f0) {
            ctx->pc = 0x12B814u;
            goto label_12b814;
        }
    }
    ctx->pc = 0x12B7F8u;
label_12b7f8:
    // 0x12b7f8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_12b7fc:
    // 0x12b7fc: 0xc065c58  jal         func_197160
label_12b800:
    if (ctx->pc == 0x12B800u) {
        ctx->pc = 0x12B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7FCu;
        // 0x12b800: 0x24a5c968  addiu       $a1, $a1, -0x3698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B804u;
        goto label_12b804;
    }
    ctx->pc = 0x12B7FCu;
    SET_GPR_U32(ctx, 31, 0x12B804u);
    ctx->pc = 0x12B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7FCu;
    // 0x12b800: 0x24a5c968  addiu       $a1, $a1, -0x3698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x12B7FCu, 0x12B804u)) {
        return;
    }
    ctx->pc = 0x12B804u;
label_12b804:
    // 0x12b804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b808:
    if (ctx->pc == 0x12B808u) {
        ctx->pc = 0x12B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B804u;
        // 0x12b808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B80Cu;
        goto label_12b80c;
    }
    ctx->pc = 0x12B804u;
    {
        const bool branch_taken_0x12b804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B804u;
        // 0x12b808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b804) {
            ctx->pc = 0x12B814u;
            goto label_12b814;
        }
    }
    ctx->pc = 0x12B80Cu;
label_12b80c:
    // 0x12b80c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_12b810:
    if (ctx->pc == 0x12B810u) {
        ctx->pc = 0x12B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B80Cu;
        // 0x12b810: 0xae022d14  sw          $v0, 0x2D14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B814u;
        goto label_12b814;
    }
    ctx->pc = 0x12B80Cu;
    {
        const bool branch_taken_0x12b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B80Cu;
        // 0x12b810: 0xae022d14  sw          $v0, 0x2D14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b80c) {
            ctx->pc = 0x12B8C4u;
            goto label_12b8c4;
        }
    }
    ctx->pc = 0x12B814u;
label_12b814:
    // 0x12b814: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_12b818:
    // 0x12b818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b81c:
    // 0x12b81c: 0xc065c58  jal         func_197160
label_12b820:
    if (ctx->pc == 0x12B820u) {
        ctx->pc = 0x12B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B81Cu;
        // 0x12b820: 0x24a5c978  addiu       $a1, $a1, -0x3688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B824u;
        goto label_12b824;
    }
    ctx->pc = 0x12B81Cu;
    SET_GPR_U32(ctx, 31, 0x12B824u);
    ctx->pc = 0x12B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B81Cu;
    // 0x12b820: 0x24a5c978  addiu       $a1, $a1, -0x3688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x12B81Cu, 0x12B824u)) {
        return;
    }
    ctx->pc = 0x12B824u;
label_12b824:
    // 0x12b824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b828:
    if (ctx->pc == 0x12B828u) {
        ctx->pc = 0x12B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B824u;
        // 0x12b828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B82Cu;
        goto label_12b82c;
    }
    ctx->pc = 0x12B824u;
    {
        const bool branch_taken_0x12b824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B824u;
        // 0x12b828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b824) {
            ctx->pc = 0x12B834u;
            goto label_12b834;
        }
    }
    ctx->pc = 0x12B82Cu;
label_12b82c:
    // 0x12b82c: 0x10000025  b           . + 4 + (0x25 << 2)
label_12b830:
    if (ctx->pc == 0x12B830u) {
        ctx->pc = 0x12B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B82Cu;
        // 0x12b830: 0xae022bcc  sw          $v0, 0x2BCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B834u;
        goto label_12b834;
    }
    ctx->pc = 0x12B82Cu;
    {
        const bool branch_taken_0x12b82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B82Cu;
        // 0x12b830: 0xae022bcc  sw          $v0, 0x2BCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b82c) {
            ctx->pc = 0x12B8C4u;
            goto label_12b8c4;
        }
    }
    ctx->pc = 0x12B834u;
label_12b834:
    // 0x12b834: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12b834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_12b838:
    // 0x12b838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b83c:
    // 0x12b83c: 0xc065c58  jal         func_197160
label_12b840:
    if (ctx->pc == 0x12B840u) {
        ctx->pc = 0x12B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B83Cu;
        // 0x12b840: 0x24a5c988  addiu       $a1, $a1, -0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B844u;
        goto label_12b844;
    }
    ctx->pc = 0x12B83Cu;
    SET_GPR_U32(ctx, 31, 0x12B844u);
    ctx->pc = 0x12B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B83Cu;
    // 0x12b840: 0x24a5c988  addiu       $a1, $a1, -0x3678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x12B83Cu, 0x12B844u)) {
        return;
    }
    ctx->pc = 0x12B844u;
label_12b844:
    // 0x12b844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12b848:
    if (ctx->pc == 0x12B848u) {
        ctx->pc = 0x12B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B844u;
        // 0x12b848: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B84Cu;
        goto label_12b84c;
    }
    ctx->pc = 0x12B844u;
    {
        const bool branch_taken_0x12b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B844u;
        // 0x12b848: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b844) {
            ctx->pc = 0x12B858u;
            goto label_12b858;
        }
    }
    ctx->pc = 0x12B84Cu;
label_12b84c:
    // 0x12b84c: 0xae002bc8  sw          $zero, 0x2BC8($s0)
    ctx->pc = 0x12b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11208), GPR_U32(ctx, 0));
label_12b850:
    // 0x12b850: 0x1000001c  b           . + 4 + (0x1C << 2)
label_12b854:
    if (ctx->pc == 0x12B854u) {
        ctx->pc = 0x12B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B850u;
        // 0x12b854: 0xae002bcc  sw          $zero, 0x2BCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B858u;
        goto label_12b858;
    }
    ctx->pc = 0x12B850u;
    {
        const bool branch_taken_0x12b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B850u;
        // 0x12b854: 0xae002bcc  sw          $zero, 0x2BCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b850) {
            ctx->pc = 0x12B8C4u;
            goto label_12b8c4;
        }
    }
    ctx->pc = 0x12B858u;
label_12b858:
    // 0x12b858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b85c:
    // 0x12b85c: 0xc065c58  jal         func_197160
label_12b860:
    if (ctx->pc == 0x12B860u) {
        ctx->pc = 0x12B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B85Cu;
        // 0x12b860: 0x24a5c998  addiu       $a1, $a1, -0x3668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B864u;
        goto label_12b864;
    }
    ctx->pc = 0x12B85Cu;
    SET_GPR_U32(ctx, 31, 0x12B864u);
    ctx->pc = 0x12B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B85Cu;
    // 0x12b860: 0x24a5c998  addiu       $a1, $a1, -0x3668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x12B85Cu, 0x12B864u)) {
        return;
    }
    ctx->pc = 0x12B864u;
label_12b864:
    // 0x12b864: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b868:
    if (ctx->pc == 0x12B868u) {
        ctx->pc = 0x12B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B864u;
        // 0x12b868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B86Cu;
        goto label_12b86c;
    }
    ctx->pc = 0x12B864u;
    {
        const bool branch_taken_0x12b864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B864u;
        // 0x12b868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b864) {
            ctx->pc = 0x12B874u;
            goto label_12b874;
        }
    }
    ctx->pc = 0x12B86Cu;
label_12b86c:
    // 0x12b86c: 0x10000015  b           . + 4 + (0x15 << 2)
label_12b870:
    if (ctx->pc == 0x12B870u) {
        ctx->pc = 0x12B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B86Cu;
        // 0x12b870: 0xae022bec  sw          $v0, 0x2BEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B874u;
        goto label_12b874;
    }
    ctx->pc = 0x12B86Cu;
    {
        const bool branch_taken_0x12b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B86Cu;
        // 0x12b870: 0xae022bec  sw          $v0, 0x2BEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b86c) {
            ctx->pc = 0x12B8C4u;
            goto label_12b8c4;
        }
    }
    ctx->pc = 0x12B874u;
label_12b874:
    // 0x12b874: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12b874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_12b878:
    // 0x12b878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b87c:
    // 0x12b87c: 0xc065c58  jal         func_197160
label_12b880:
    if (ctx->pc == 0x12B880u) {
        ctx->pc = 0x12B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B87Cu;
        // 0x12b880: 0x24a5c9a8  addiu       $a1, $a1, -0x3658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B884u;
        goto label_12b884;
    }
    ctx->pc = 0x12B87Cu;
    SET_GPR_U32(ctx, 31, 0x12B884u);
    ctx->pc = 0x12B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B87Cu;
    // 0x12b880: 0x24a5c9a8  addiu       $a1, $a1, -0x3658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x12B87Cu, 0x12B884u)) {
        return;
    }
    ctx->pc = 0x12B884u;
label_12b884:
    // 0x12b884: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_12b888:
    if (ctx->pc == 0x12B888u) {
        ctx->pc = 0x12B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B884u;
        // 0x12b888: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B88Cu;
        goto label_12b88c;
    }
    ctx->pc = 0x12B884u;
    {
        const bool branch_taken_0x12b884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b884) {
            ctx->pc = 0x12B888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B884u;
            // 0x12b888: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B8C8u;
            goto label_12b8c8;
        }
    }
    ctx->pc = 0x12B88Cu;
label_12b88c:
    // 0x12b88c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12b88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b890:
    // 0x12b890: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_12b894:
    // 0x12b894: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12b894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_12b898:
    // 0x12b898: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x12b898u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b89c:
    // 0x12b89c: 0x0  nop
    ctx->pc = 0x12b89cu;
    // NOP
label_12b8a0:
    // 0x12b8a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12b8a4:
    if (ctx->pc == 0x12B8A4u) {
        ctx->pc = 0x12B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A0u;
        // 0x12b8a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8A8u;
        goto label_12b8a8;
    }
    ctx->pc = 0x12B8A0u;
    {
        const bool branch_taken_0x12b8a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A0u;
        // 0x12b8a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8a0) {
            ctx->pc = 0x12B8ACu;
            goto label_12b8ac;
        }
    }
    ctx->pc = 0x12B8A8u;
label_12b8a8:
    // 0x12b8a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b8ac:
    // 0x12b8ac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x12b8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b8b0:
    // 0x12b8b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12b8b4:
    if (ctx->pc == 0x12B8B4u) {
        ctx->pc = 0x12B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B0u;
        // 0x12b8b4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8B8u;
        goto label_12b8b8;
    }
    ctx->pc = 0x12B8B0u;
    {
        const bool branch_taken_0x12b8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B0u;
        // 0x12b8b4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8b0) {
            ctx->pc = 0x12B8C4u;
            goto label_12b8c4;
        }
    }
    ctx->pc = 0x12B8B8u;
label_12b8b8:
    // 0x12b8b8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x12b8b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_12b8bc:
    // 0x12b8bc: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x12b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_12b8c0:
    // 0x12b8c0: 0xac4427dc  sw          $a0, 0x27DC($v0)
    ctx->pc = 0x12b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10204), GPR_U32(ctx, 4));
label_12b8c4:
    // 0x12b8c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12b8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b8c8:
    // 0x12b8c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b8cc:
    // 0x12b8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b8d0:
    // 0x12b8d0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x12b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12b8d4:
    // 0x12b8d4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x12b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12b8d8:
    // 0x12b8d8: 0x3e00008  jr          $ra
label_12b8dc:
    if (ctx->pc == 0x12B8DCu) {
        ctx->pc = 0x12B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8D8u;
        // 0x12b8dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8E0u;
        goto label_fallthrough_0x12b8d8;
    }
    ctx->pc = 0x12B8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8D8u;
        // 0x12b8dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b8d8:
    ctx->pc = 0x12B8E0u;
}
