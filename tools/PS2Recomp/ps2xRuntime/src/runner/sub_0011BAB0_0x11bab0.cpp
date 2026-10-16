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

// Function: sub_0011BAB0
// Address: 0x11bab0 - 0x11bbc8
void sub_0011BAB0_0x11bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BAB0_0x11bab0");
#endif

    switch (ctx->pc) {
        case 0x11bad4u: goto label_11bad4;
        case 0x11baf8u: goto label_11baf8;
        case 0x11bb00u: goto label_11bb00;
        case 0x11bb1cu: goto label_11bb1c;
        case 0x11bb28u: goto label_11bb28;
        case 0x11bb94u: goto label_11bb94;
        default: break;
    }

    ctx->pc = 0x11bab0u;

    // 0x11bab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bab4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11bab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bab8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11babc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11babcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bac0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11bac4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11bac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11bac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bacc: 0xc044624  jal         func_111890
    ctx->pc = 0x11BACCu;
    SET_GPR_U32(ctx, 31, 0x11BAD4u);
    ctx->pc = 0x11BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BACCu;
    // 0x11bad0: 0x26120098  addiu       $s2, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x11BACCu, 0x11BAD4u)) {
        return;
    }
    ctx->pc = 0x11BAD4u;
label_11bad4:
    // 0x11bad4: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x11bad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x11bad8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11badc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11badcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11bae0: 0x2463b030  addiu       $v1, $v1, -0x4FD0
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946864));
    // 0x11bae4: 0x2442b010  addiu       $v0, $v0, -0x4FF0
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946832));
    // 0x11bae8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x11bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x11baec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11baecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11baf0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11BAF0u;
    SET_GPR_U32(ctx, 31, 0x11BAF8u);
    ctx->pc = 0x11BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAF0u;
    // 0x11baf4: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11BAF0u, 0x11BAF8u)) {
        return;
    }
    ctx->pc = 0x11BAF8u;
label_11baf8:
    // 0x11baf8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11BAF8u;
    SET_GPR_U32(ctx, 31, 0x11BB00u);
    ctx->pc = 0x11BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAF8u;
    // 0x11bafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11BAF8u, 0x11BB00u)) {
        return;
    }
    ctx->pc = 0x11BB00u;
label_11bb00:
    // 0x11bb00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bb04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb08: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x11bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x11bb0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb10: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x11bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x11bb14: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x11BB14u;
    SET_GPR_U32(ctx, 31, 0x11BB1Cu);
    ctx->pc = 0x11BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB14u;
    // 0x11bb18: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x11BB14u, 0x11BB1Cu)) {
        return;
    }
    ctx->pc = 0x11BB1Cu;
label_11bb1c:
    // 0x11bb1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb20: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x11BB20u;
    SET_GPR_U32(ctx, 31, 0x11BB28u);
    ctx->pc = 0x11BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB20u;
    // 0x11bb24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x11BB20u, 0x11BB28u)) {
        return;
    }
    ctx->pc = 0x11BB28u;
label_11bb28:
    // 0x11bb28: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x11bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x11bb2c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x11bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x11bb30: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x11bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x11bb34: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x11bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x11bb38: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x11bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x11bb3c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x11bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x11bb40: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x11bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x11bb44: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x11bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x11bb48: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x11bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x11bb4c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x11bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x11bb50: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x11bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x11bb54: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x11bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x11bb58: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x11bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x11bb5c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x11bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x11bb60: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x11bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x11bb64: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x11bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x11bb68: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x11bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x11bb6c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x11bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x11bb70: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x11bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x11bb74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11bb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11bb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb80: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x11bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x11bb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb88: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x11bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x11bb8c: 0xc046ce0  jal         func_11B380
    ctx->pc = 0x11BB8Cu;
    SET_GPR_U32(ctx, 31, 0x11BB94u);
    ctx->pc = 0x11BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB8Cu;
    // 0x11bb90: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11B380u, 0x11BB8Cu, 0x11BB94u)) {
        return;
    }
    ctx->pc = 0x11BB94u;
label_11bb94:
    // 0x11bb94: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x11bb98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11bb98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11bb9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11bb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11bba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bba4: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x11bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x11bba8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x11bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x11bbac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11bbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bbb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11bbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bbb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11bbb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x11BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBBCu;
        // 0x11bbc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BBC4u;
    // 0x11bbc4: 0x0  nop
    ctx->pc = 0x11bbc4u;
    // NOP
    ctx->pc = 0x11bbc8u;
}
