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

// Function: sub_0030A620
// Address: 0x30a620 - 0x30a720
void sub_0030A620_0x30a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A620_0x30a620");
#endif

    switch (ctx->pc) {
        case 0x30a648u: goto label_30a648;
        case 0x30a674u: goto label_30a674;
        case 0x30a6a0u: goto label_30a6a0;
        case 0x30a6f0u: goto label_30a6f0;
        default: break;
    }

    ctx->pc = 0x30a620u;

    // 0x30a620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30a624: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30a624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30a628: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30a62c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30a62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a630: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30a634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30a634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a638: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a63c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30a63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a640: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A640u;
    SET_GPR_U32(ctx, 31, 0x30A648u);
    ctx->pc = 0x30A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A640u;
    // 0x30a644: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A640u, 0x30A648u)) {
        return;
    }
    ctx->pc = 0x30A648u;
label_30a648:
    // 0x30a648: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x30A648u;
    {
        const bool branch_taken_0x30a648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A648u;
        // 0x30a64c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a648) {
            ctx->pc = 0x30A6E0u;
            goto label_30a6e0;
        }
    }
    ctx->pc = 0x30A650u;
    // 0x30a650: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30a654: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30a654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30a658: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x30A658u;
    {
        const bool branch_taken_0x30a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A658u;
        // 0x30a65c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a658) {
            ctx->pc = 0x30A6E0u;
            goto label_30a6e0;
        }
    }
    ctx->pc = 0x30A660u;
    // 0x30a660: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x30A660u;
    {
        const bool branch_taken_0x30a660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A660u;
        // 0x30a664: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a660) {
            ctx->pc = 0x30A6E0u;
            goto label_30a6e0;
        }
    }
    ctx->pc = 0x30A668u;
    // 0x30a668: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a66c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A66Cu;
    SET_GPR_U32(ctx, 31, 0x30A674u);
    ctx->pc = 0x30A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A66Cu;
    // 0x30a670: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A66Cu, 0x30A674u)) {
        return;
    }
    ctx->pc = 0x30A674u;
label_30a674:
    // 0x30a674: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30A674u;
    {
        const bool branch_taken_0x30a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A674u;
        // 0x30a678: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a674) {
            ctx->pc = 0x30A6A8u;
            goto label_30a6a8;
        }
    }
    ctx->pc = 0x30A67Cu;
    // 0x30a67c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30a680: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30a680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30a684: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A684u;
    {
        const bool branch_taken_0x30a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A684u;
        // 0x30a688: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a684) {
            ctx->pc = 0x30A6A8u;
            goto label_30a6a8;
        }
    }
    ctx->pc = 0x30A68Cu;
    // 0x30a68c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A68Cu;
    {
        const bool branch_taken_0x30a68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A68Cu;
        // 0x30a690: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a68c) {
            ctx->pc = 0x30A6A8u;
            goto label_30a6a8;
        }
    }
    ctx->pc = 0x30A694u;
    // 0x30a694: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a698: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30A698u;
    SET_GPR_U32(ctx, 31, 0x30A6A0u);
    ctx->pc = 0x30A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A698u;
    // 0x30a69c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30A698u, 0x30A6A0u)) {
        return;
    }
    ctx->pc = 0x30A6A0u;
label_30a6a0:
    // 0x30a6a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A6A0u;
    {
        const bool branch_taken_0x30a6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6A0u;
        // 0x30a6a4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6a0) {
            ctx->pc = 0x30A6B0u;
            goto label_30a6b0;
        }
    }
    ctx->pc = 0x30A6A8u;
label_30a6a8:
    // 0x30a6a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30A6A8u;
    {
        const bool branch_taken_0x30a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6A8u;
        // 0x30a6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6a8) {
            ctx->pc = 0x30A6D8u;
            goto label_30a6d8;
        }
    }
    ctx->pc = 0x30A6B0u;
label_30a6b0:
    // 0x30a6b0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x30a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a6b4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x30a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a6b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30a6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30a6bc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30a6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30a6c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A6C0u;
    {
        const bool branch_taken_0x30a6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6C0u;
        // 0x30a6c4: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6c0) {
            ctx->pc = 0x30A6D4u;
            goto label_30a6d4;
        }
    }
    ctx->pc = 0x30A6C8u;
    // 0x30a6c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a6cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30a6d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30a6d4:
    // 0x30a6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a6d8:
    // 0x30a6d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A6D8u;
    {
        const bool branch_taken_0x30a6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6D8u;
        // 0x30a6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6d8) {
            ctx->pc = 0x30A6E8u;
            goto label_30a6e8;
        }
    }
    ctx->pc = 0x30A6E0u;
label_30a6e0:
    // 0x30a6e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30A6E0u;
    {
        const bool branch_taken_0x30a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6E0u;
        // 0x30a6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6e0) {
            ctx->pc = 0x30A708u;
            goto label_30a708;
        }
    }
    ctx->pc = 0x30A6E8u;
label_30a6e8:
    // 0x30a6e8: 0xc0aa07e  jal         func_2A81F8
    ctx->pc = 0x30A6E8u;
    SET_GPR_U32(ctx, 31, 0x30A6F0u);
    ctx->pc = 0x30A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6E8u;
    // 0x30a6ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A81F8u, 0x30A6E8u, 0x30A6F0u)) {
        return;
    }
    ctx->pc = 0x30A6F0u;
label_30a6f0:
    // 0x30a6f0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A6F0u;
    {
        const bool branch_taken_0x30a6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6F0u;
        // 0x30a6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6f0) {
            ctx->pc = 0x30A708u;
            goto label_30a708;
        }
    }
    ctx->pc = 0x30A6F8u;
    // 0x30a6f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a6fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30a700: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a708:
    // 0x30a708: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30a708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a70c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30a70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a710: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30a710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a714: 0x3e00008  jr          $ra
    ctx->pc = 0x30A714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A714u;
        // 0x30a718: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A71Cu;
    // 0x30a71c: 0x0  nop
    ctx->pc = 0x30a71cu;
    // NOP
    ctx->pc = 0x30a720u;
}
