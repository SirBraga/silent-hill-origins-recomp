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

// Function: sub_002ABDF0
// Address: 0x2abdf0 - 0x2abf00
void sub_002ABDF0_0x2abdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABDF0_0x2abdf0");
#endif

    switch (ctx->pc) {
        case 0x2abe5cu: goto label_2abe5c;
        default: break;
    }

    ctx->pc = 0x2abdf0u;

    // 0x2abdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2abdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2abdf4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2abdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2abdf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2abdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2abdfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2abdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2abe00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2abe04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2abe04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe08: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2abe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2abe0c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2abe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2abe10: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x2abe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2abe14: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x2abe14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2abe18: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2abe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2abe1c: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x2abe1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2abe20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2abe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abe24: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x2abe24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2abe28: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2abe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2abe2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2abe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2abe30: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2abe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abe34: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2abe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2abe38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2abe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2abe3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2abe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abe40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2abe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abe44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2abe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2abe48: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2abe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2abe4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2abe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2abe50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2abe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2abe54: 0xc0ae07c  jal         func_2B81F0
    ctx->pc = 0x2ABE54u;
    SET_GPR_U32(ctx, 31, 0x2ABE5Cu);
    ctx->pc = 0x2ABE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE54u;
    // 0x2abe58: 0x24500090  addiu       $s0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B81F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B81F0u, 0x2ABE54u, 0x2ABE5Cu)) {
        return;
    }
    ctx->pc = 0x2ABE5Cu;
label_2abe5c:
    // 0x2abe5c: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x2abe5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2abe60: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2abe60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2abe64: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2abe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2abe68: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x2abe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2abe6c: 0x2523001f  addiu       $v1, $t1, 0x1F
    ctx->pc = 0x2abe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
    // 0x2abe70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2abe70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2abe74: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2abe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2abe78: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x2abe78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2abe7c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2abe7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2abe80: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2abe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x2abe84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2abe84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2abe88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2abe88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abe8c: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2abe8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2abe90: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2abe90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2abe94: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2abe94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2abe98: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABE98u;
    {
        const bool branch_taken_0x2abe98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE98u;
        // 0x2abe9c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe98) {
            ctx->pc = 0x2ABEB4u;
            goto label_2abeb4;
        }
    }
    ctx->pc = 0x2ABEA0u;
    // 0x2abea0: 0x2402009c  addiu       $v0, $zero, 0x9C
    ctx->pc = 0x2abea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2abea4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2abea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2abea8: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2abea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2abeac: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x2abeacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2abeb0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2abeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2abeb4:
    // 0x2abeb4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2abeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2abeb8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABEB8u;
    {
        const bool branch_taken_0x2abeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEB8u;
        // 0x2abebc: 0x2462001f  addiu       $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abeb8) {
            ctx->pc = 0x2ABED4u;
            goto label_2abed4;
        }
    }
    ctx->pc = 0x2ABEC0u;
    // 0x2abec0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2abec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2abec4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2abec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2abec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2abec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2abecc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2abeccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2abed0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2abed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2abed4:
    // 0x2abed4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2abed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2abed8: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x2abed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2abedc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2abedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2abee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2abee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abee4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2abee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2abee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abeec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2abeecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2abef0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2abef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2abef4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2abef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEF8u;
        // 0x2abefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABF00u;
}
