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

// Function: sub_002ED730
// Address: 0x2ed730 - 0x2ed7e8
void sub_002ED730_0x2ed730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED730_0x2ed730");
#endif

    switch (ctx->pc) {
        case 0x2ed750u: goto label_2ed750;
        case 0x2ed760u: goto label_2ed760;
        case 0x2ed77cu: goto label_2ed77c;
        case 0x2ed7ccu: goto label_2ed7cc;
        default: break;
    }

    ctx->pc = 0x2ed730u;

    // 0x2ed730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed734: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ed734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ed738: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ed73c: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x2ed73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2ed740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed744: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed748: 0xc0b8fa4  jal         func_2E3E90
    ctx->pc = 0x2ED748u;
    SET_GPR_U32(ctx, 31, 0x2ED750u);
    ctx->pc = 0x2ED74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED748u;
    // 0x2ed74c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E90u, 0x2ED748u, 0x2ED750u)) {
        return;
    }
    ctx->pc = 0x2ED750u;
label_2ed750:
    // 0x2ed750: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2ed750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2ed754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ed754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed758: 0xc0b77ba  jal         func_2DDEE8
    ctx->pc = 0x2ED758u;
    SET_GPR_U32(ctx, 31, 0x2ED760u);
    ctx->pc = 0x2ED75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED758u;
    // 0x2ed75c: 0x24a5e840  addiu       $a1, $a1, -0x17C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDEE8u, 0x2ED758u, 0x2ED760u)) {
        return;
    }
    ctx->pc = 0x2ED760u;
label_2ed760:
    // 0x2ed760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed764: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ED764u;
    {
        const bool branch_taken_0x2ed764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED764u;
        // 0x2ed768: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed764) {
            ctx->pc = 0x2ED7D4u;
            goto label_2ed7d4;
        }
    }
    ctx->pc = 0x2ED76Cu;
    // 0x2ed76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed770: 0x24a5ffa8  addiu       $a1, $a1, -0x58
    ctx->pc = 0x2ed770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967208));
    // 0x2ed774: 0xc0b77a6  jal         func_2DDE98
    ctx->pc = 0x2ED774u;
    SET_GPR_U32(ctx, 31, 0x2ED77Cu);
    ctx->pc = 0x2ED778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED774u;
    // 0x2ed778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDE98u, 0x2ED774u, 0x2ED77Cu)) {
        return;
    }
    ctx->pc = 0x2ED77Cu;
label_2ed77c:
    // 0x2ed77c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2ed77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2ed780: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2ed780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2ed784: 0x2484d4c0  addiu       $a0, $a0, -0x2B40
    ctx->pc = 0x2ed784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956224));
    // 0x2ed788: 0x24c6dc30  addiu       $a2, $a2, -0x23D0
    ctx->pc = 0x2ed788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958128));
    // 0x2ed78c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ed78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ed790: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ed794: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2ed794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2ed798: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x2ed798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x2ed79c: 0x2463d348  addiu       $v1, $v1, -0x2CB8
    ctx->pc = 0x2ed79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955848));
    // 0x2ed7a0: 0x24e7dc28  addiu       $a3, $a3, -0x23D8
    ctx->pc = 0x2ed7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958120));
    // 0x2ed7a4: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2ed7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x2ed7a8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2ed7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2ed7ac: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x2ed7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x2ed7b0: 0x24a56278  addiu       $a1, $a1, 0x6278
    ctx->pc = 0x2ed7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25208));
    // 0x2ed7b4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ed7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ed7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7bc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2ed7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2ed7c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ed7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed7c4: 0xc0b7830  jal         func_2DE0C0
    ctx->pc = 0x2ED7C4u;
    SET_GPR_U32(ctx, 31, 0x2ED7CCu);
    ctx->pc = 0x2ED7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7C4u;
    // 0x2ed7c8: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE0C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE0C0u, 0x2ED7C4u, 0x2ED7CCu)) {
        return;
    }
    ctx->pc = 0x2ED7CCu;
label_2ed7cc:
    // 0x2ed7cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED7CCu;
    {
        const bool branch_taken_0x2ed7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7CCu;
        // 0x2ed7d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7cc) {
            ctx->pc = 0x2ED7D8u;
            goto label_2ed7d8;
        }
    }
    ctx->pc = 0x2ED7D4u;
label_2ed7d4:
    // 0x2ed7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed7d8:
    // 0x2ed7d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7E0u;
        // 0x2ed7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED7E8u;
}
