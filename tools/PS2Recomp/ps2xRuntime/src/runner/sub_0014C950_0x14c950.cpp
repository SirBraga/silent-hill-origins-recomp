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

// Function: sub_0014C950
// Address: 0x14c950 - 0x14ca40
void sub_0014C950_0x14c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C950_0x14c950");
#endif

    switch (ctx->pc) {
        case 0x14c978u: goto label_14c978;
        case 0x14c9acu: goto label_14c9ac;
        case 0x14c9c0u: goto label_14c9c0;
        case 0x14c9ccu: goto label_14c9cc;
        case 0x14c9e4u: goto label_14c9e4;
        case 0x14ca20u: goto label_14ca20;
        case 0x14ca28u: goto label_14ca28;
        default: break;
    }

    ctx->pc = 0x14c950u;

    // 0x14c950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c954: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14c958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14c95c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14c95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c964: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c968: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14C968u;
    {
        const bool branch_taken_0x14c968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C968u;
        // 0x14c96c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c968) {
            ctx->pc = 0x14C9D0u;
            goto label_14c9d0;
        }
    }
    ctx->pc = 0x14C970u;
    // 0x14c970: 0xc053290  jal         func_14CA40
    ctx->pc = 0x14C970u;
    SET_GPR_U32(ctx, 31, 0x14C978u);
    ctx->pc = 0x14C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C970u;
    // 0x14c974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14CA40u, 0x14C970u, 0x14C978u)) {
        return;
    }
    ctx->pc = 0x14C978u;
label_14c978:
    // 0x14c978: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14c97c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14c980: 0x8c444770  lw          $a0, 0x4770($v0)
    ctx->pc = 0x14c980u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4770u));
    // 0x14c984: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x14c988: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C988u;
    {
        const bool branch_taken_0x14c988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C988u;
        // 0x14c98c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c988) {
            ctx->pc = 0x14C9ACu;
            goto label_14c9ac;
        }
    }
    ctx->pc = 0x14C990u;
    // 0x14c990: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c994: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C994u;
    {
        const bool branch_taken_0x14c994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c994) {
            ctx->pc = 0x14C998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C994u;
            // 0x14c998: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C9B0u;
            goto label_14c9b0;
        }
    }
    ctx->pc = 0x14C99Cu;
    // 0x14c99c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14c9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9a4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14C9A4u;
    SET_GPR_U32(ctx, 31, 0x14C9ACu);
    ctx->pc = 0x14C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9A4u;
    // 0x14c9a8: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14C9A4u, 0x14C9ACu)) {
        return;
    }
    ctx->pc = 0x14C9ACu;
label_14c9ac:
    // 0x14c9ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c9b0:
    // 0x14c9b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C9B0u;
    {
        const bool branch_taken_0x14c9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9b0) {
            ctx->pc = 0x14C9C4u;
            goto label_14c9c4;
        }
    }
    ctx->pc = 0x14C9B8u;
    // 0x14c9b8: 0xc09419a  jal         func_250668
    ctx->pc = 0x14C9B8u;
    SET_GPR_U32(ctx, 31, 0x14C9C0u);
    ctx->pc = 0x250668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250668u, 0x14C9B8u, 0x14C9C0u)) {
        return;
    }
    ctx->pc = 0x14C9C0u;
label_14c9c0:
    // 0x14c9c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_14c9c4:
    // 0x14c9c4: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x14C9C4u;
    SET_GPR_U32(ctx, 31, 0x14C9CCu);
    ctx->pc = 0x14C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9C4u;
    // 0x14c9c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x14C9C4u, 0x14C9CCu)) {
        return;
    }
    ctx->pc = 0x14C9CCu;
label_14c9cc:
    // 0x14c9cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_14c9d0:
    // 0x14c9d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14c9d4: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14C9D4u;
    {
        const bool branch_taken_0x14c9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9d4) {
            ctx->pc = 0x14C9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C9D4u;
            // 0x14c9d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CA0Cu;
            goto label_14ca0c;
        }
    }
    ctx->pc = 0x14C9DCu;
    // 0x14c9dc: 0xc041628  jal         func_1058A0
    ctx->pc = 0x14C9DCu;
    SET_GPR_U32(ctx, 31, 0x14C9E4u);
    ctx->pc = 0x14C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9DCu;
    // 0x14c9e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x14C9DCu, 0x14C9E4u)) {
        return;
    }
    ctx->pc = 0x14C9E4u;
label_14c9e4:
    // 0x14c9e4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x14c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x14c9e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14c9ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c9f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14c9f4: 0xac44015c  sw          $a0, 0x15C($v0)
    ctx->pc = 0x14c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 4));
    // 0x14c9f8: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x14c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x14c9fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ca00: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x14ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
    // 0x14ca04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14ca08: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x14ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14ca0c:
    // 0x14ca0c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CA0Cu;
    {
        const bool branch_taken_0x14ca0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA0Cu;
        // 0x14ca10: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca0c) {
            ctx->pc = 0x14CA2Cu;
            goto label_14ca2c;
        }
    }
    ctx->pc = 0x14CA14u;
    // 0x14ca14: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14ca18: 0xc0640ce  jal         func_190338
    ctx->pc = 0x14CA18u;
    SET_GPR_U32(ctx, 31, 0x14CA20u);
    ctx->pc = 0x14CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA18u;
    // 0x14ca1c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190338u, 0x14CA18u, 0x14CA20u)) {
        return;
    }
    ctx->pc = 0x14CA20u;
label_14ca20:
    // 0x14ca20: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14CA20u;
    SET_GPR_U32(ctx, 31, 0x14CA28u);
    ctx->pc = 0x14CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA20u;
    // 0x14ca24: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14CA20u, 0x14CA28u)) {
        return;
    }
    ctx->pc = 0x14CA28u;
label_14ca28:
    // 0x14ca28: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x14ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_14ca2c:
    // 0x14ca2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14ca2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ca30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ca30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ca34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ca34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ca38: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA38u;
        // 0x14ca3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CA40u;
}
