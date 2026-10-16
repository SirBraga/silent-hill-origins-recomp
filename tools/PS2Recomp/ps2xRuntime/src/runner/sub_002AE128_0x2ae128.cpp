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

// Function: sub_002AE128
// Address: 0x2ae128 - 0x2ae1b8
void sub_002AE128_0x2ae128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE128_0x2ae128");
#endif

    switch (ctx->pc) {
        case 0x2ae158u: goto label_2ae158;
        case 0x2ae17cu: goto label_2ae17c;
        case 0x2ae1a4u: goto label_2ae1a4;
        default: break;
    }

    ctx->pc = 0x2ae128u;

    // 0x2ae128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae12c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ae130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ae134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae13c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae140: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ae140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae144: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2ae144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ae148: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2ae148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2ae14c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ae14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae150: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x2AE150u;
    SET_GPR_U32(ctx, 31, 0x2AE158u);
    ctx->pc = 0x2AE154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE150u;
    // 0x2ae154: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2AE150u, 0x2AE158u)) {
        return;
    }
    ctx->pc = 0x2AE158u;
label_2ae158:
    // 0x2ae158: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae15c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2ae15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2ae160: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae164: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae168: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2ae168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ae16c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2ae16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ae170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ae170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae174: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2AE174u;
    SET_GPR_U32(ctx, 31, 0x2AE17Cu);
    ctx->pc = 0x2AE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE174u;
    // 0x2ae178: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2AE174u, 0x2AE17Cu)) {
        return;
    }
    ctx->pc = 0x2AE17Cu;
label_2ae17c:
    // 0x2ae17c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae180: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae184: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2ae184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ae188: 0x43980  sll         $a3, $a0, 6
    ctx->pc = 0x2ae188u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2ae18c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ae18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ae190: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ae190u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ae194: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2ae194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2ae198: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2ae198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2ae19c: 0xc0a4cd2  jal         func_293348
    ctx->pc = 0x2AE19Cu;
    SET_GPR_U32(ctx, 31, 0x2AE1A4u);
    ctx->pc = 0x2AE1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE19Cu;
    // 0x2ae1a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293348u, 0x2AE19Cu, 0x2AE1A4u)) {
        return;
    }
    ctx->pc = 0x2AE1A4u;
label_2ae1a4:
    // 0x2ae1a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ae1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae1ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ae1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1B0u;
        // 0x2ae1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE1B8u;
}
