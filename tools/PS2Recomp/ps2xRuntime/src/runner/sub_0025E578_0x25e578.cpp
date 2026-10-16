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

// Function: sub_0025E578
// Address: 0x25e578 - 0x25e668
void sub_0025E578_0x25e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E578_0x25e578");
#endif

    switch (ctx->pc) {
        case 0x25e5e8u: goto label_25e5e8;
        case 0x25e5fcu: goto label_25e5fc;
        case 0x25e610u: goto label_25e610;
        case 0x25e620u: goto label_25e620;
        case 0x25e628u: goto label_25e628;
        default: break;
    }

    ctx->pc = 0x25e578u;

    // 0x25e578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25e578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25e57c: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x25e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
    // 0x25e580: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25e580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x25e584: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25e584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x25e588: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25e588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e58c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x25e590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e594: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25e598: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x25e598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x25e59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e5a0: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e5a4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x25e5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x25e5a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e5ac: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x25e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x25e5b0: 0x24a5dd90  addiu       $a1, $a1, -0x2270
    ctx->pc = 0x25e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958480));
    // 0x25e5b4: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x25e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x25e5b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25e5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5bc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x25e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x25e5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5c4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x25e5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25e5c8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x25e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x25e5cc: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x25e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x25e5d0: 0xae27002c  sw          $a3, 0x2C($s1)
    ctx->pc = 0x25e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 7));
    // 0x25e5d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x25e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25e5d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25e5dc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x25e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x25e5e0: 0xc09545a  jal         func_255168
    ctx->pc = 0x25E5E0u;
    SET_GPR_U32(ctx, 31, 0x25E5E8u);
    ctx->pc = 0x25E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5E0u;
    // 0x25e5e4: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x25E5E0u, 0x25E5E8u)) {
        return;
    }
    ctx->pc = 0x25E5E8u;
label_25e5e8:
    // 0x25e5e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5f0: 0x24a5de08  addiu       $a1, $a1, -0x21F8
    ctx->pc = 0x25e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958600));
    // 0x25e5f4: 0xc095498  jal         func_255260
    ctx->pc = 0x25E5F4u;
    SET_GPR_U32(ctx, 31, 0x25E5FCu);
    ctx->pc = 0x25E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5F4u;
    // 0x25e5f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255260u, 0x25E5F4u, 0x25E5FCu)) {
        return;
    }
    ctx->pc = 0x25E5FCu;
label_25e5fc:
    // 0x25e5fc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e604: 0x24a5de80  addiu       $a1, $a1, -0x2180
    ctx->pc = 0x25e604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958720));
    // 0x25e608: 0xc095478  jal         func_2551E0
    ctx->pc = 0x25E608u;
    SET_GPR_U32(ctx, 31, 0x25E610u);
    ctx->pc = 0x25E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E608u;
    // 0x25e60c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2551E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2551E0u, 0x25E608u, 0x25E610u)) {
        return;
    }
    ctx->pc = 0x25E610u;
label_25e610:
    // 0x25e610: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E610u;
    {
        const bool branch_taken_0x25e610 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E610u;
        // 0x25e614: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e610) {
            ctx->pc = 0x25E628u;
            goto label_25e628;
        }
    }
    ctx->pc = 0x25E618u;
    // 0x25e618: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x25E618u;
    SET_GPR_U32(ctx, 31, 0x25E620u);
    ctx->pc = 0x25E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E618u;
    // 0x25e61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x25E618u, 0x25E620u)) {
        return;
    }
    ctx->pc = 0x25E620u;
label_25e620:
    // 0x25e620: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x25E620u;
    SET_GPR_U32(ctx, 31, 0x25E628u);
    ctx->pc = 0x25E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E620u;
    // 0x25e624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x25E620u, 0x25E628u)) {
        return;
    }
    ctx->pc = 0x25E628u;
label_25e628:
    // 0x25e628: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25e628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25e62c: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25e630: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x25e630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x25e634: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x25e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
    // 0x25e638: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25e638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e63c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e640: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25e640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e644: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x25e644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25e648: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25e648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e64c: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x25e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x25e650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e654: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25e654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e65c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E65Cu;
        // 0x25e660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E664u;
    // 0x25e664: 0x0  nop
    ctx->pc = 0x25e664u;
    // NOP
    ctx->pc = 0x25e668u;
}
