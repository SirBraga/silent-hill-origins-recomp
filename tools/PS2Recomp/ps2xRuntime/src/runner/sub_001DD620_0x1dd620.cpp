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

// Function: sub_001DD620
// Address: 0x1dd620 - 0x1dd708
void sub_001DD620_0x1dd620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD620_0x1dd620");
#endif

    switch (ctx->pc) {
        case 0x1dd654u: goto label_1dd654;
        case 0x1dd670u: goto label_1dd670;
        default: break;
    }

    ctx->pc = 0x1dd620u;

    // 0x1dd620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd624: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dd628: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1dd628u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1dd62c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dd630: 0x8e25e664  lw          $a1, -0x199C($s1)
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dd634: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd638: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dd638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dd63c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1dd63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd640: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dd640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd644: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1dd644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dd648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd64c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1DD64Cu;
    SET_GPR_U32(ctx, 31, 0x1DD654u);
    ctx->pc = 0x1DD650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD64Cu;
    // 0x1dd650: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1DD64Cu, 0x1DD654u)) {
        return;
    }
    ctx->pc = 0x1DD654u;
label_1dd654:
    // 0x1dd654: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD654u;
    {
        const bool branch_taken_0x1dd654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD654u;
        // 0x1dd658: 0x8e25e664  lw          $a1, -0x199C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd654) {
            ctx->pc = 0x1DD678u;
            goto label_1dd678;
        }
    }
    ctx->pc = 0x1DD65Cu;
    // 0x1dd65c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dd65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd660: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1dd660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd664: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1dd664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dd668: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1DD668u;
    SET_GPR_U32(ctx, 31, 0x1DD670u);
    ctx->pc = 0x1DD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD668u;
    // 0x1dd66c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1DD668u, 0x1DD670u)) {
        return;
    }
    ctx->pc = 0x1DD670u;
label_1dd670:
    // 0x1dd670: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD670u;
    {
        const bool branch_taken_0x1dd670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD670u;
        // 0x1dd674: 0x8e22e664  lw          $v0, -0x199C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd670) {
            ctx->pc = 0x1DD680u;
            goto label_1dd680;
        }
    }
    ctx->pc = 0x1DD678u;
label_1dd678:
    // 0x1dd678: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1DD678u;
    {
        const bool branch_taken_0x1dd678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD678u;
        // 0x1dd67c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd678) {
            ctx->pc = 0x1DD6F0u;
            goto label_1dd6f0;
        }
    }
    ctx->pc = 0x1DD680u;
label_1dd680:
    // 0x1dd680: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dd680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dd684: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1dd684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd688: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD688u;
    {
        const bool branch_taken_0x1dd688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd688) {
            ctx->pc = 0x1DD6B0u;
            goto label_1dd6b0;
        }
    }
    ctx->pc = 0x1DD690u;
    // 0x1dd690: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dd690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dd694: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD694u;
    {
        const bool branch_taken_0x1dd694 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1dd694) {
            ctx->pc = 0x1DD698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD694u;
            // 0x1dd698: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6A8u;
            goto label_1dd6a8;
        }
    }
    ctx->pc = 0x1DD69Cu;
    // 0x1dd69c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dd6a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DD6A0u;
    {
        const bool branch_taken_0x1dd6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6A0u;
        // 0x1dd6a4: 0x2442c350  addiu       $v0, $v0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6a0) {
            ctx->pc = 0x1DD6D8u;
            goto label_1dd6d8;
        }
    }
    ctx->pc = 0x1DD6A8u;
label_1dd6a8:
    // 0x1dd6a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DD6A8u;
    {
        const bool branch_taken_0x1dd6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6A8u;
        // 0x1dd6ac: 0x2442c240  addiu       $v0, $v0, -0x3DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6a8) {
            ctx->pc = 0x1DD6D8u;
            goto label_1dd6d8;
        }
    }
    ctx->pc = 0x1DD6B0u;
label_1dd6b0:
    // 0x1dd6b0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD6B0u;
    {
        const bool branch_taken_0x1dd6b0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1DD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6B0u;
        // 0x1dd6b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6b0) {
            ctx->pc = 0x1DD6F0u;
            goto label_1dd6f0;
        }
    }
    ctx->pc = 0x1DD6B8u;
    // 0x1dd6b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1dd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1dd6bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dd6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dd6c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD6C0u;
    {
        const bool branch_taken_0x1dd6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6C0u;
        // 0x1dd6c4: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6c0) {
            ctx->pc = 0x1DD6D0u;
            goto label_1dd6d0;
        }
    }
    ctx->pc = 0x1DD6C8u;
    // 0x1dd6c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD6C8u;
    {
        const bool branch_taken_0x1dd6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6C8u;
        // 0x1dd6cc: 0x2442c470  addiu       $v0, $v0, -0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6c8) {
            ctx->pc = 0x1DD6D8u;
            goto label_1dd6d8;
        }
    }
    ctx->pc = 0x1DD6D0u;
label_1dd6d0:
    // 0x1dd6d0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dd6d4: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1dd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
label_1dd6d8:
    // 0x1dd6d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD6D8u;
    {
        const bool branch_taken_0x1dd6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D8u;
        // 0x1dd6dc: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6d8) {
            ctx->pc = 0x1DD6ECu;
            goto label_1dd6ec;
        }
    }
    ctx->pc = 0x1DD6E0u;
    // 0x1dd6e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dd6e4: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dd6e8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1dd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1dd6ec:
    // 0x1dd6ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dd6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6f0:
    // 0x1dd6f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dd6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd6f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd6f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dd6f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd700: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD700u;
        // 0x1dd704: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD708u;
}
