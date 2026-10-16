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

// Function: sub_00184658
// Address: 0x184658 - 0x1846f0
void sub_00184658_0x184658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184658_0x184658");
#endif

    switch (ctx->pc) {
        case 0x18466cu: goto label_18466c;
        case 0x1846d8u: goto label_1846d8;
        default: break;
    }

    ctx->pc = 0x184658u;

    // 0x184658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18465c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184664: 0xc047dda  jal         func_11F768
    ctx->pc = 0x184664u;
    SET_GPR_U32(ctx, 31, 0x18466Cu);
    ctx->pc = 0x184668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184664u;
    // 0x184668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F768u, 0x184664u, 0x18466Cu)) {
        return;
    }
    ctx->pc = 0x18466Cu;
label_18466c:
    // 0x18466c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18466cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x184670: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x184670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x184674: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x184674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x184678: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x184678u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x18467c: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
    // 0x184680: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x184680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
    // 0x184684: 0x24428170  addiu       $v0, $v0, -0x7E90
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x184688: 0x25088130  addiu       $t0, $t0, -0x7ED0
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934832));
    // 0x18468c: 0x25298118  addiu       $t1, $t1, -0x7EE8
    ctx->pc = 0x18468cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934808));
    // 0x184690: 0x254a82b0  addiu       $t2, $t2, -0x7D50
    ctx->pc = 0x184690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935216));
    // 0x184694: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x184694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184698: 0xae0014c0  sw          $zero, 0x14C0($s0)
    ctx->pc = 0x184698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5312), GPR_U32(ctx, 0));
    // 0x18469c: 0xae0014c4  sw          $zero, 0x14C4($s0)
    ctx->pc = 0x18469cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5316), GPR_U32(ctx, 0));
    // 0x1846a0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1846a4: 0xae0014c8  sw          $zero, 0x14C8($s0)
    ctx->pc = 0x1846a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5320), GPR_U32(ctx, 0));
    // 0x1846a8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1846a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1846ac: 0xae0014cc  sw          $zero, 0x14CC($s0)
    ctx->pc = 0x1846acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5324), GPR_U32(ctx, 0));
    // 0x1846b0: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1846b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1846b4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1846b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1846b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1846b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846bc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1846bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1846c0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1846c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1846c4: 0xae080084  sw          $t0, 0x84($s0)
    ctx->pc = 0x1846c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 8));
    // 0x1846c8: 0xae090314  sw          $t1, 0x314($s0)
    ctx->pc = 0x1846c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 9));
    // 0x1846cc: 0xae0a0034  sw          $t2, 0x34($s0)
    ctx->pc = 0x1846ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 10));
    // 0x1846d0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1846D0u;
    SET_GPR_U32(ctx, 31, 0x1846D8u);
    ctx->pc = 0x1846D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1846D0u;
    // 0x1846d4: 0xae0b14d0  sw          $t3, 0x14D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5328), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1846D0u, 0x1846D8u)) {
        return;
    }
    ctx->pc = 0x1846D8u;
label_1846d8:
    // 0x1846d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1846d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1846dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1846e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1846e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1846e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1846E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1846E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846E4u;
        // 0x1846e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1846E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1846ECu;
    // 0x1846ec: 0x0  nop
    ctx->pc = 0x1846ecu;
    // NOP
    ctx->pc = 0x1846f0u;
}
