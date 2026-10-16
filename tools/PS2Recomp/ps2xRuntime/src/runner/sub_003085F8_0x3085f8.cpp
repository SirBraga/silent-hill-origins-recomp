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

// Function: sub_003085F8
// Address: 0x3085f8 - 0x3086d0
void sub_003085F8_0x3085f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003085F8_0x3085f8");
#endif

    switch (ctx->pc) {
        case 0x308648u: goto label_308648;
        case 0x308674u: goto label_308674;
        case 0x308684u: goto label_308684;
        default: break;
    }

    ctx->pc = 0x3085f8u;

    // 0x3085f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3085f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3085fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3085fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x308600: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x308600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x308604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x308604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x308608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30860c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30860cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308610: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x308610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x308614: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x308614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30861c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30861Cu;
    {
        const bool branch_taken_0x30861c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30861Cu;
        // 0x308620: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30861c) {
            ctx->pc = 0x308664u;
            goto label_308664;
        }
    }
    ctx->pc = 0x308624u;
    // 0x308624: 0x1a000022  blez        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x308624u;
    {
        const bool branch_taken_0x308624 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x308628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308624u;
        // 0x308628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308624) {
            ctx->pc = 0x3086B0u;
            goto label_3086b0;
        }
    }
    ctx->pc = 0x30862Cu;
    // 0x30862c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x30862cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x308630: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x308630u;
    {
        const bool branch_taken_0x308630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308630u;
        // 0x308634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308630) {
            ctx->pc = 0x3086B0u;
            goto label_3086b0;
        }
    }
    ctx->pc = 0x308638u;
    // 0x308638: 0x5a60001e  blezl       $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x308638u;
    {
        const bool branch_taken_0x308638 = (GPR_S64(ctx, 19) <= 0);
        if (branch_taken_0x308638) {
            ctx->pc = 0x30863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308638u;
            // 0x30863c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3086B4u;
            goto label_3086b4;
        }
    }
    ctx->pc = 0x308640u;
    // 0x308640: 0xc0c10d6  jal         func_304358
    ctx->pc = 0x308640u;
    SET_GPR_U32(ctx, 31, 0x308648u);
    ctx->pc = 0x308644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308640u;
    // 0x308644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x308640u, 0x308648u)) {
        return;
    }
    ctx->pc = 0x308648u;
label_308648:
    // 0x308648: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x308648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30864c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30864Cu;
    {
        const bool branch_taken_0x30864c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30864c) {
            ctx->pc = 0x30866Cu;
            goto label_30866c;
        }
    }
    ctx->pc = 0x308654u;
    // 0x308654: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x308654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x308658: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x308658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x30865c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30865Cu;
    {
        const bool branch_taken_0x30865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30865Cu;
        // 0x308660: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30865c) {
            ctx->pc = 0x30868Cu;
            goto label_30868c;
        }
    }
    ctx->pc = 0x308664u;
label_308664:
    // 0x308664: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x308664u;
    {
        const bool branch_taken_0x308664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308664u;
        // 0x308668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308664) {
            ctx->pc = 0x3086B0u;
            goto label_3086b0;
        }
    }
    ctx->pc = 0x30866Cu;
label_30866c:
    // 0x30866c: 0xc0c20da  jal         func_308368
    ctx->pc = 0x30866Cu;
    SET_GPR_U32(ctx, 31, 0x308674u);
    ctx->pc = 0x308670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30866Cu;
    // 0x308670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308368u, 0x30866Cu, 0x308674u)) {
        return;
    }
    ctx->pc = 0x308674u;
label_308674:
    // 0x308674: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x308674u;
    {
        const bool branch_taken_0x308674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308674u;
        // 0x308678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308674) {
            ctx->pc = 0x3086B0u;
            goto label_3086b0;
        }
    }
    ctx->pc = 0x30867Cu;
    // 0x30867c: 0xc0c10d6  jal         func_304358
    ctx->pc = 0x30867Cu;
    SET_GPR_U32(ctx, 31, 0x308684u);
    ctx->pc = 0x308680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30867Cu;
    // 0x308680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x30867Cu, 0x308684u)) {
        return;
    }
    ctx->pc = 0x308684u;
label_308684:
    // 0x308684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x308684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308688: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x308688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_30868c:
    // 0x30868c: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x30868cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x308690: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x308690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x308694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x308694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x308698: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x308698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30869c: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x30869cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x3086a0: 0xacb00038  sw          $s0, 0x38($a1)
    ctx->pc = 0x3086a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 16));
    // 0x3086a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3086a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086a8: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x3086a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x3086ac: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x3086acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_3086b0:
    // 0x3086b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3086b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3086b4:
    // 0x3086b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3086b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3086b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3086b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3086bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3086bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3086c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3086c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3086c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3086C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3086C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086C4u;
        // 0x3086c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3086C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3086CCu;
    // 0x3086cc: 0x0  nop
    ctx->pc = 0x3086ccu;
    // NOP
    ctx->pc = 0x3086d0u;
}
