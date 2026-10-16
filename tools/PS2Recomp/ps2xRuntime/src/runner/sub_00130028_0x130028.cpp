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

// Function: sub_00130028
// Address: 0x130028 - 0x1300f0
void sub_00130028_0x130028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130028_0x130028");
#endif

    switch (ctx->pc) {
        case 0x13004cu: goto label_13004c;
        case 0x130058u: goto label_130058;
        case 0x130074u: goto label_130074;
        case 0x130080u: goto label_130080;
        case 0x1300b0u: goto label_1300b0;
        case 0x1300e0u: goto label_1300e0;
        default: break;
    }

    ctx->pc = 0x130028u;

    // 0x130028: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x130028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13002c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x130030: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x130030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x130034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130038: 0x8e0214cc  lw          $v0, 0x14CC($s0)
    ctx->pc = 0x130038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5324)));
    // 0x13003c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13003Cu;
    {
        const bool branch_taken_0x13003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13003c) {
            ctx->pc = 0x130040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13003Cu;
            // 0x130040: 0x8e060040  lw          $a2, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130064u;
            goto label_130064;
        }
    }
    ctx->pc = 0x130044u;
    // 0x130044: 0xc040688  jal         func_101A20
    ctx->pc = 0x130044u;
    SET_GPR_U32(ctx, 31, 0x13004Cu);
    ctx->pc = 0x130048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130044u;
    // 0x130048: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x130044u, 0x13004Cu)) {
        return;
    }
    ctx->pc = 0x13004Cu;
label_13004c:
    // 0x13004c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13004cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130050: 0xc040698  jal         func_101A60
    ctx->pc = 0x130050u;
    SET_GPR_U32(ctx, 31, 0x130058u);
    ctx->pc = 0x130054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130050u;
    // 0x130054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x130050u, 0x130058u)) {
        return;
    }
    ctx->pc = 0x130058u;
label_130058:
    // 0x130058: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x130058u;
    {
        const bool branch_taken_0x130058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130058u;
        // 0x13005c: 0xae0214cc  sw          $v0, 0x14CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130058) {
            ctx->pc = 0x1300E0u;
            goto label_1300e0;
        }
    }
    ctx->pc = 0x130060u;
    // 0x130060: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x130060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_130064:
    // 0x130064: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130068: 0x8e0514cc  lw          $a1, 0x14CC($s0)
    ctx->pc = 0x130068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5324)));
    // 0x13006c: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x13006Cu;
    SET_GPR_U32(ctx, 31, 0x130074u);
    ctx->pc = 0x130070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13006Cu;
    // 0x130070: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x13006Cu, 0x130074u)) {
        return;
    }
    ctx->pc = 0x130074u;
label_130074:
    // 0x130074: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x130074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130078: 0xc092dbc  jal         func_24B6F0
    ctx->pc = 0x130078u;
    SET_GPR_U32(ctx, 31, 0x130080u);
    ctx->pc = 0x13007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130078u;
    // 0x13007c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x130078u, 0x130080u)) {
        return;
    }
    ctx->pc = 0x130080u;
label_130080:
    // 0x130080: 0x8e0414c4  lw          $a0, 0x14C4($s0)
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5316)));
    // 0x130084: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x130084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x130088: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x130088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x13008c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13008cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130090: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x130090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x130094: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x130094u;
    {
        const bool branch_taken_0x130094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130094u;
        // 0x130098: 0xafbd0044  sw          $sp, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130094) {
            ctx->pc = 0x1300B0u;
            goto label_1300b0;
        }
    }
    ctx->pc = 0x13009Cu;
    // 0x13009c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1300a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1300A0u;
    {
        const bool branch_taken_0x1300a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300A0u;
        // 0x1300a4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300a0) {
            ctx->pc = 0x1300B4u;
            goto label_1300b4;
        }
    }
    ctx->pc = 0x1300A8u;
    // 0x1300a8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1300A8u;
    SET_GPR_U32(ctx, 31, 0x1300B0u);
    ctx->pc = 0x1300ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300A8u;
    // 0x1300ac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1300A8u, 0x1300B0u)) {
        return;
    }
    ctx->pc = 0x1300B0u;
label_1300b0:
    // 0x1300b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1300b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1300b4:
    // 0x1300b4: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1300b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1300b8: 0x8c444790  lw          $a0, 0x4790($v0)
    ctx->pc = 0x1300b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x1300bc: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1300BCu;
    {
        const bool branch_taken_0x1300bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1300C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300BCu;
        // 0x1300c0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300bc) {
            ctx->pc = 0x1300E4u;
            goto label_1300e4;
        }
    }
    ctx->pc = 0x1300C4u;
    // 0x1300c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1300c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1300c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1300C8u;
    {
        const bool branch_taken_0x1300c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300C8u;
        // 0x1300cc: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300c8) {
            ctx->pc = 0x1300E4u;
            goto label_1300e4;
        }
    }
    ctx->pc = 0x1300D0u;
    // 0x1300d0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1300d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1300d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1300d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300d8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1300D8u;
    SET_GPR_U32(ctx, 31, 0x1300E0u);
    ctx->pc = 0x1300DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300D8u;
    // 0x1300dc: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1300D8u, 0x1300E0u)) {
        return;
    }
    ctx->pc = 0x1300E0u;
label_1300e0:
    // 0x1300e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1300e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1300e4:
    // 0x1300e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1300e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1300e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1300E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1300ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300E8u;
        // 0x1300ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1300E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1300F0u;
}
