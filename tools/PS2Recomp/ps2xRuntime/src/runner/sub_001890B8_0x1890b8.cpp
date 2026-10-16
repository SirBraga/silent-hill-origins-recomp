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

// Function: sub_001890B8
// Address: 0x1890b8 - 0x189160
void sub_001890B8_0x1890b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001890B8_0x1890b8");
#endif

    switch (ctx->pc) {
        case 0x1890d0u: goto label_1890d0;
        case 0x1890dcu: goto label_1890dc;
        case 0x189108u: goto label_189108;
        case 0x189110u: goto label_189110;
        case 0x189118u: goto label_189118;
        default: break;
    }

    ctx->pc = 0x1890b8u;

    // 0x1890b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1890b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1890bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1890bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1890c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1890c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1890c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1890c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1890c8: 0xc0620ba  jal         func_1882E8
    ctx->pc = 0x1890C8u;
    SET_GPR_U32(ctx, 31, 0x1890D0u);
    ctx->pc = 0x1890CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890C8u;
    // 0x1890cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1882E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1882E8u, 0x1890C8u, 0x1890D0u)) {
        return;
    }
    ctx->pc = 0x1890D0u;
label_1890d0:
    // 0x1890d0: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1890d4: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1890D4u;
    SET_GPR_U32(ctx, 31, 0x1890DCu);
    ctx->pc = 0x1890D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890D4u;
    // 0x1890d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1890D4u, 0x1890DCu)) {
        return;
    }
    ctx->pc = 0x1890DCu;
label_1890dc:
    // 0x1890dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1890dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1890e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1890e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1890e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1890e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1890e8: 0x24638ba0  addiu       $v1, $v1, -0x7460
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937504));
    // 0x1890ec: 0x24a58c08  addiu       $a1, $a1, -0x73F8
    ctx->pc = 0x1890ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937608));
    // 0x1890f0: 0x24428bc0  addiu       $v0, $v0, -0x7440
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937536));
    // 0x1890f4: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1890f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1890f8: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x1890fc: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1890fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x189100: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x189100u;
    SET_GPR_U32(ctx, 31, 0x189108u);
    ctx->pc = 0x189104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189100u;
    // 0x189104: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x189100u, 0x189108u)) {
        return;
    }
    ctx->pc = 0x189108u;
label_189108:
    // 0x189108: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x189108u;
    SET_GPR_U32(ctx, 31, 0x189110u);
    ctx->pc = 0x18910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189108u;
    // 0x18910c: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x189108u, 0x189110u)) {
        return;
    }
    ctx->pc = 0x189110u;
label_189110:
    // 0x189110: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x189110u;
    SET_GPR_U32(ctx, 31, 0x189118u);
    ctx->pc = 0x189114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189110u;
    // 0x189114: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x189110u, 0x189118u)) {
        return;
    }
    ctx->pc = 0x189118u;
label_189118:
    // 0x189118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x189118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18911c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x18911cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x189120: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x189120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x189124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189128: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x189128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x18912c: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x18912cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x189130: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x189130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x189134: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x189134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x189138: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x189138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x18913c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x18913cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x189140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189144: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x189144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x189148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18914c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18914cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x189150: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x189150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x189154: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x189154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189158: 0x3e00008  jr          $ra
    ctx->pc = 0x189158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189158u;
        // 0x18915c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189160u;
}
