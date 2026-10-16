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

// Function: sub_0030D598
// Address: 0x30d598 - 0x30d690
void sub_0030D598_0x30d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D598_0x30d598");
#endif

    switch (ctx->pc) {
        case 0x30d5ccu: goto label_30d5cc;
        case 0x30d5e4u: goto label_30d5e4;
        case 0x30d604u: goto label_30d604;
        case 0x30d63cu: goto label_30d63c;
        default: break;
    }

    ctx->pc = 0x30d598u;

    // 0x30d598: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30d59c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30d59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30d5a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30d5a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30d5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x30d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30d5b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d5b8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D5B8u;
    {
        const bool branch_taken_0x30d5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5B8u;
        // 0x30d5bc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5b8) {
            ctx->pc = 0x30D5D8u;
            goto label_30d5d8;
        }
    }
    ctx->pc = 0x30D5C0u;
    // 0x30d5c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30d5c4: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D5C4u;
    SET_GPR_U32(ctx, 31, 0x30D5CCu);
    ctx->pc = 0x30D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5C4u;
    // 0x30d5c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D5C4u, 0x30D5CCu)) {
        return;
    }
    ctx->pc = 0x30D5CCu;
label_30d5cc:
    // 0x30d5cc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x30D5CCu;
    {
        const bool branch_taken_0x30d5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5CCu;
        // 0x30d5d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5cc) {
            ctx->pc = 0x30D67Cu;
            goto label_30d67c;
        }
    }
    ctx->pc = 0x30D5D4u;
    // 0x30d5d4: 0x0  nop
    ctx->pc = 0x30d5d4u;
    // NOP
label_30d5d8:
    // 0x30d5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5dc: 0xc0aa090  jal         func_2A8240
    ctx->pc = 0x30D5DCu;
    SET_GPR_U32(ctx, 31, 0x30D5E4u);
    ctx->pc = 0x30D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5DCu;
    // 0x30d5e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8240u, 0x30D5DCu, 0x30D5E4u)) {
        return;
    }
    ctx->pc = 0x30D5E4u;
label_30d5e4:
    // 0x30d5e4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x30d5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30d5ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d5f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D5F0u;
    {
        const bool branch_taken_0x30d5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5F0u;
        // 0x30d5f4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5f0) {
            ctx->pc = 0x30D610u;
            goto label_30d610;
        }
    }
    ctx->pc = 0x30D5F8u;
    // 0x30d5f8: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x30d5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x30d5fc: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D5FCu;
    SET_GPR_U32(ctx, 31, 0x30D604u);
    ctx->pc = 0x30D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5FCu;
    // 0x30d600: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D5FCu, 0x30D604u)) {
        return;
    }
    ctx->pc = 0x30D604u;
label_30d604:
    // 0x30d604: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30D604u;
    {
        const bool branch_taken_0x30d604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D604u;
        // 0x30d608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d604) {
            ctx->pc = 0x30D65Cu;
            goto label_30d65c;
        }
    }
    ctx->pc = 0x30D60Cu;
    // 0x30d60c: 0x0  nop
    ctx->pc = 0x30d60cu;
    // NOP
label_30d610:
    // 0x30d610: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x30d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d614: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d618: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30d61c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x30d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d620: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x30d620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30d624: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x30d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d628: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D628u;
    {
        const bool branch_taken_0x30d628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D628u;
        // 0x30d62c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d628) {
            ctx->pc = 0x30D644u;
            goto label_30d644;
        }
    }
    ctx->pc = 0x30D630u;
    // 0x30d630: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30d634: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30D634u;
    SET_GPR_U32(ctx, 31, 0x30D63Cu);
    ctx->pc = 0x30D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D634u;
    // 0x30d638: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30D634u, 0x30D63Cu)) {
        return;
    }
    ctx->pc = 0x30D63Cu;
label_30d63c:
    // 0x30d63c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D63Cu;
    {
        const bool branch_taken_0x30d63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D63Cu;
        // 0x30d640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d63c) {
            ctx->pc = 0x30D65Cu;
            goto label_30d65c;
        }
    }
    ctx->pc = 0x30D644u;
label_30d644:
    // 0x30d644: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D644u;
    {
        const bool branch_taken_0x30d644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D644u;
        // 0x30d648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d644) {
            ctx->pc = 0x30D65Cu;
            goto label_30d65c;
        }
    }
    ctx->pc = 0x30D64Cu;
    // 0x30d64c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d650: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30d654: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d65c:
    // 0x30d65c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D65Cu;
    {
        const bool branch_taken_0x30d65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D65Cu;
        // 0x30d660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d65c) {
            ctx->pc = 0x30D67Cu;
            goto label_30d67c;
        }
    }
    ctx->pc = 0x30D664u;
    // 0x30d664: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D664u;
    {
        const bool branch_taken_0x30d664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D664u;
        // 0x30d668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d664) {
            ctx->pc = 0x30D67Cu;
            goto label_30d67c;
        }
    }
    ctx->pc = 0x30D66Cu;
    // 0x30d66c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d670: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d674: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d67c:
    // 0x30d67c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30d67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d680: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30d680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30d684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d688: 0x3e00008  jr          $ra
    ctx->pc = 0x30D688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D688u;
        // 0x30d68c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D690u;
}
