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

// Function: sub_0017D138
// Address: 0x17d138 - 0x17d1f0
void sub_0017D138_0x17d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D138_0x17d138");
#endif

    switch (ctx->pc) {
        case 0x17d158u: goto label_17d158;
        case 0x17d164u: goto label_17d164;
        case 0x17d198u: goto label_17d198;
        case 0x17d1a0u: goto label_17d1a0;
        case 0x17d1acu: goto label_17d1ac;
        case 0x17d1c4u: goto label_17d1c4;
        default: break;
    }

    ctx->pc = 0x17d138u;

    // 0x17d138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d13c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17d140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d144: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17d144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17d148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17d14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d150: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x17D150u;
    SET_GPR_U32(ctx, 31, 0x17D158u);
    ctx->pc = 0x17D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D150u;
    // 0x17d154: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x17D150u, 0x17D158u)) {
        return;
    }
    ctx->pc = 0x17D158u;
label_17d158:
    // 0x17d158: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x17d158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17d15c: 0xc041e9a  jal         func_107A68
    ctx->pc = 0x17D15Cu;
    SET_GPR_U32(ctx, 31, 0x17D164u);
    ctx->pc = 0x17D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D15Cu;
    // 0x17d160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A68u, 0x17D15Cu, 0x17D164u)) {
        return;
    }
    ctx->pc = 0x17D164u;
label_17d164:
    // 0x17d164: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17d168: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17d16c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17d16cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17d170: 0x246373b8  addiu       $v1, $v1, 0x73B8
    ctx->pc = 0x17d170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29624));
    // 0x17d174: 0x24c673d8  addiu       $a2, $a2, 0x73D8
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29656));
    // 0x17d178: 0x24427378  addiu       $v0, $v0, 0x7378
    ctx->pc = 0x17d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29560));
    // 0x17d17c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x17d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x17d180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d184: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x17d184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x17d188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d18c: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x17d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x17d190: 0xc041c1c  jal         func_107070
    ctx->pc = 0x17D190u;
    SET_GPR_U32(ctx, 31, 0x17D198u);
    ctx->pc = 0x17D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D190u;
    // 0x17d194: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107070u, 0x17D190u, 0x17D198u)) {
        return;
    }
    ctx->pc = 0x17D198u;
label_17d198:
    // 0x17d198: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x17D198u;
    SET_GPR_U32(ctx, 31, 0x17D1A0u);
    ctx->pc = 0x17D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D198u;
    // 0x17d19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x17D198u, 0x17D1A0u)) {
        return;
    }
    ctx->pc = 0x17D1A0u;
label_17d1a0:
    // 0x17d1a0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x17d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x17d1a4: 0xc041f10  jal         func_107C40
    ctx->pc = 0x17D1A4u;
    SET_GPR_U32(ctx, 31, 0x17D1ACu);
    ctx->pc = 0x17D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1A4u;
    // 0x17d1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x17D1A4u, 0x17D1ACu)) {
        return;
    }
    ctx->pc = 0x17D1ACu;
label_17d1ac:
    // 0x17d1ac: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x17d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x17d1b0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x17d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x17d1b4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x17d1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x17d1b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1bc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17D1BCu;
    SET_GPR_U32(ctx, 31, 0x17D1C4u);
    ctx->pc = 0x17D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1BCu;
    // 0x17d1c0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17D1BCu, 0x17D1C4u)) {
        return;
    }
    ctx->pc = 0x17D1C4u;
label_17d1c4:
    // 0x17d1c4: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x17d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x17d1c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1cc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17d1d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17d1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d1d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17d1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d1d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17d1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d1e0: 0xac648854  sw          $a0, -0x77AC($v1)
    ctx->pc = 0x17d1e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x338854u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338854u, _value); } while (0);
    // 0x17d1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1E4u;
        // 0x17d1e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D1ECu;
    // 0x17d1ec: 0x0  nop
    ctx->pc = 0x17d1ecu;
    // NOP
    ctx->pc = 0x17d1f0u;
}
