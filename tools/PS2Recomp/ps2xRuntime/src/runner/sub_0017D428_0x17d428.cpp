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

// Function: sub_0017D428
// Address: 0x17d428 - 0x17d4d8
void sub_0017D428_0x17d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D428_0x17d428");
#endif

    switch (ctx->pc) {
        case 0x17d450u: goto label_17d450;
        case 0x17d45cu: goto label_17d45c;
        case 0x17d46cu: goto label_17d46c;
        case 0x17d490u: goto label_17d490;
        case 0x17d4a4u: goto label_17d4a4;
        case 0x17d4b4u: goto label_17d4b4;
        case 0x17d4c4u: goto label_17d4c4;
        default: break;
    }

    ctx->pc = 0x17d428u;

    // 0x17d428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d42c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17d430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d434: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17D434u;
    {
        const bool branch_taken_0x17d434 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D434u;
        // 0x17d438: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d434) {
            ctx->pc = 0x17D4C4u;
            goto label_17d4c4;
        }
    }
    ctx->pc = 0x17D43Cu;
    // 0x17d43c: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x17D43Cu;
    {
        const bool branch_taken_0x17d43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d43c) {
            ctx->pc = 0x17D440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D43Cu;
            // 0x17d440: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D498u;
            goto label_17d498;
        }
    }
    ctx->pc = 0x17D444u;
    // 0x17d444: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d448: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17D448u;
    SET_GPR_U32(ctx, 31, 0x17D450u);
    ctx->pc = 0x17D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D448u;
    // 0x17d44c: 0x2484f948  addiu       $a0, $a0, -0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17D448u, 0x17D450u)) {
        return;
    }
    ctx->pc = 0x17D450u;
label_17d450:
    // 0x17d450: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d454: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17D454u;
    SET_GPR_U32(ctx, 31, 0x17D45Cu);
    ctx->pc = 0x17D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D454u;
    // 0x17d458: 0x2484f950  addiu       $a0, $a0, -0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17D454u, 0x17D45Cu)) {
        return;
    }
    ctx->pc = 0x17D45Cu;
label_17d45c:
    // 0x17d45c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x17d45cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x17d460: 0x261074d0  addiu       $s0, $s0, 0x74D0
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29904));
    // 0x17d464: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17D464u;
    SET_GPR_U32(ctx, 31, 0x17D46Cu);
    ctx->pc = 0x17D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D464u;
    // 0x17d468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17D464u, 0x17D46Cu)) {
        return;
    }
    ctx->pc = 0x17D46Cu;
label_17d46c:
    // 0x17d46c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17d470: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d474: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d478: 0xac62f958  sw          $v0, -0x6A8($v1)
    ctx->pc = 0x17d478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF958u, _value); } while (0);
    // 0x17d47c: 0x2484f960  addiu       $a0, $a0, -0x6A0
    ctx->pc = 0x17d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965600));
    // 0x17d480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d484: 0x24c6d4d8  addiu       $a2, $a2, -0x2B28
    ctx->pc = 0x17d484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956248));
    // 0x17d488: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17D488u;
    SET_GPR_U32(ctx, 31, 0x17D490u);
    ctx->pc = 0x17D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D488u;
    // 0x17d48c: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17D488u, 0x17D490u)) {
        return;
    }
    ctx->pc = 0x17D490u;
label_17d490:
    // 0x17d490: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17D490u;
    {
        const bool branch_taken_0x17d490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D490u;
        // 0x17d494: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d490) {
            ctx->pc = 0x17D4C8u;
            goto label_17d4c8;
        }
    }
    ctx->pc = 0x17D498u;
label_17d498:
    // 0x17d498: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d49c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17D49Cu;
    SET_GPR_U32(ctx, 31, 0x17D4A4u);
    ctx->pc = 0x17D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D49Cu;
    // 0x17d4a0: 0x2484f960  addiu       $a0, $a0, -0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17D49Cu, 0x17D4A4u)) {
        return;
    }
    ctx->pc = 0x17D4A4u;
label_17d4a4:
    // 0x17d4a4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d4a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d4ac: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17D4ACu;
    SET_GPR_U32(ctx, 31, 0x17D4B4u);
    ctx->pc = 0x17D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4ACu;
    // 0x17d4b0: 0x2484f950  addiu       $a0, $a0, -0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17D4ACu, 0x17D4B4u)) {
        return;
    }
    ctx->pc = 0x17D4B4u;
label_17d4b4:
    // 0x17d4b4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d4b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d4bc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17D4BCu;
    SET_GPR_U32(ctx, 31, 0x17D4C4u);
    ctx->pc = 0x17D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4BCu;
    // 0x17d4c0: 0x2484f948  addiu       $a0, $a0, -0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17D4BCu, 0x17D4C4u)) {
        return;
    }
    ctx->pc = 0x17D4C4u;
label_17d4c4:
    // 0x17d4c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17d4c8:
    // 0x17d4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4CCu;
        // 0x17d4d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D4D4u;
    // 0x17d4d4: 0x0  nop
    ctx->pc = 0x17d4d4u;
    // NOP
    ctx->pc = 0x17d4d8u;
}
