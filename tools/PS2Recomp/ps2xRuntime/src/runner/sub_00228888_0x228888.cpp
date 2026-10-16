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

// Function: sub_00228888
// Address: 0x228888 - 0x228978
void sub_00228888_0x228888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228888_0x228888");
#endif

    switch (ctx->pc) {
        case 0x2288c8u: goto label_2288c8;
        case 0x228928u: goto label_228928;
        default: break;
    }

    ctx->pc = 0x228888u;

    // 0x228888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22888c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22888cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228890: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x228890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x228894: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x228894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x228898: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x228898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22889c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x22889cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x2288a0: 0x26100ff4  addiu       $s0, $s0, 0xFF4
    ctx->pc = 0x2288a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4084));
    // 0x2288a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2288a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2288a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2288a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2288ac: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2288acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2288b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2288b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2288b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2288b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2288b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2288b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2288bc: 0xac223e98  sw          $v0, 0x3E98($at)
    ctx->pc = 0x2288bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3E98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E98u, _value); } while (0);
    // 0x2288c0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2288C0u;
    SET_GPR_U32(ctx, 31, 0x2288C8u);
    ctx->pc = 0x2288C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288C0u;
    // 0x2288c4: 0x2611ffd4  addiu       $s1, $s0, -0x2C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2288C0u, 0x2288C8u)) {
        return;
    }
    ctx->pc = 0x2288C8u;
label_2288c8:
    // 0x2288c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2288c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2288cc: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x2288ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E98u));
    // 0x2288d0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2288d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2288d4: 0x8c440430  lw          $a0, 0x430($v0)
    ctx->pc = 0x2288d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0430u));
    // 0x2288d8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2288d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2288dc: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x2288dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2288e0: 0x8f8583c4  lw          $a1, -0x7C3C($gp)
    ctx->pc = 0x2288e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935492)));
    // 0x2288e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2288e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2288e8: 0x8f8783c8  lw          $a3, -0x7C38($gp)
    ctx->pc = 0x2288e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935496)));
    // 0x2288ec: 0xa066004d  sb          $a2, 0x4D($v1)
    ctx->pc = 0x2288ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x2288f0: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x2288f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x2288f4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2288f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2288f8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2288f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2288fc: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x2288fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x228900: 0x25082df8  addiu       $t0, $t0, 0x2DF8
    ctx->pc = 0x228900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11768));
    // 0x228904: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x228904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x228908: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x228908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22890c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x22890cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x228910: 0x35290407  ori         $t1, $t1, 0x407
    ctx->pc = 0x228910u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1031);
    // 0x228914: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x228914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x228918: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x228918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x22891c: 0xa060004c  sb          $zero, 0x4C($v1)
    ctx->pc = 0x22891cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x228920: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x228920u;
    SET_GPR_U32(ctx, 31, 0x228928u);
    ctx->pc = 0x228924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228920u;
    // 0x228924: 0xac600028  sw          $zero, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x228920u, 0x228928u)) {
        return;
    }
    ctx->pc = 0x228928u;
label_228928:
    // 0x228928: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x228928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22892c: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x22892cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E98u));
    // 0x228930: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x228930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x228934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x228934u;
    {
        const bool branch_taken_0x228934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228934u;
        // 0x228938: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228934) {
            ctx->pc = 0x228958u;
            goto label_228958;
        }
    }
    ctx->pc = 0x22893Cu;
    // 0x22893c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22893cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x228940: 0x8c633e9c  lw          $v1, 0x3E9C($v1)
    ctx->pc = 0x228940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E9Cu));
    // 0x228944: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x228944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x228948: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x228948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22894c: 0xac233e9c  sw          $v1, 0x3E9C($at)
    ctx->pc = 0x22894cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E9Cu, _value); } while (0);
    // 0x228950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228950u;
    {
        const bool branch_taken_0x228950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228950u;
        // 0x228954: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228950) {
            ctx->pc = 0x22895Cu;
            goto label_22895c;
        }
    }
    ctx->pc = 0x228958u;
label_228958:
    // 0x228958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22895c:
    // 0x22895c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22895cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228960: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x228960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228964: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x228964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22896c: 0x3e00008  jr          $ra
    ctx->pc = 0x22896Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22896Cu;
        // 0x228970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22896Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228974u;
    // 0x228974: 0x0  nop
    ctx->pc = 0x228974u;
    // NOP
    ctx->pc = 0x228978u;
}
