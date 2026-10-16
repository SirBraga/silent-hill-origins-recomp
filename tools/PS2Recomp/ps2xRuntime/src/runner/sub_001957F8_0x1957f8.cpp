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

// Function: sub_001957F8
// Address: 0x1957f8 - 0x1958d0
void sub_001957F8_0x1957f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001957F8_0x1957f8");
#endif

    switch (ctx->pc) {
        case 0x195844u: goto label_195844;
        case 0x195880u: goto label_195880;
        default: break;
    }

    ctx->pc = 0x1957f8u;

    // 0x1957f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1957f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1957fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1957fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195800: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x195800u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x195804: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x195804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x195808: 0x8e428bb8  lw          $v0, -0x7448($s2)
    ctx->pc = 0x195808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338BB8u));
    // 0x19580c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x195810: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x195810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x195814: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x195814u;
    {
        const bool branch_taken_0x195814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195814u;
        // 0x195818: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195814) {
            ctx->pc = 0x1958B4u;
            goto label_1958b4;
        }
    }
    ctx->pc = 0x19581Cu;
    // 0x19581c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x19581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x195820: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x195820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x195824: 0x8c438bb4  lw          $v1, -0x744C($v0)
    ctx->pc = 0x195824u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338BB4u));
    // 0x195828: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19582c: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x19582Cu;
    {
        const bool branch_taken_0x19582c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x195830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19582Cu;
        // 0x195830: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19582c) {
            ctx->pc = 0x1958B4u;
            goto label_1958b4;
        }
    }
    ctx->pc = 0x195834u;
    // 0x195834: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x195834u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x195838: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x195838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19583c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x19583Cu;
    SET_GPR_U32(ctx, 31, 0x195844u);
    ctx->pc = 0x195840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19583Cu;
    // 0x195840: 0x36050001  ori         $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x19583Cu, 0x195844u)) {
        return;
    }
    ctx->pc = 0x195844u;
label_195844:
    // 0x195844: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x195844u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x195848: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x195848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x19584c: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x19584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x195850: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x195850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x195854: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x195858: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x195858u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19585c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x195860: 0x8c82412c  lw          $v0, 0x412C($a0)
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x195864: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x195864u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x195868: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19586c: 0xac82412c  sw          $v0, 0x412C($a0)
    ctx->pc = 0x19586cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x195870: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x195870u;
    {
        const bool branch_taken_0x195870 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x195874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195870u;
        // 0x195874: 0x8e458bb8  lw          $a1, -0x7448($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195870) {
            ctx->pc = 0x1958B0u;
            goto label_1958b0;
        }
    }
    ctx->pc = 0x195878u;
    // 0x195878: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x195878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19587c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195880:
    // 0x195880: 0x8cc2412c  lw          $v0, 0x412C($a2)
    ctx->pc = 0x195880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16684)));
    // 0x195884: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x195884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195888: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x195888u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19588c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x195890: 0xacc2412c  sw          $v0, 0x412C($a2)
    ctx->pc = 0x195890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16684), GPR_U32(ctx, 2));
    // 0x195894: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x195894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x195898: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x195898u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19589c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1958a0: 0xacc2412c  sw          $v0, 0x412C($a2)
    ctx->pc = 0x1958a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16684), GPR_U32(ctx, 2));
    // 0x1958a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1958a8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1958A8u;
    {
        const bool branch_taken_0x1958a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1958ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958A8u;
        // 0x1958ac: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958a8) {
            ctx->pc = 0x195880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195880;
        }
    }
    ctx->pc = 0x1958B0u;
label_1958b0:
    // 0x1958b0: 0xae608bb4  sw          $zero, -0x744C($s3)
    ctx->pc = 0x1958b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294937524), GPR_U32(ctx, 0));
label_1958b4:
    // 0x1958b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1958b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1958b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1958b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1958bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1958bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1958c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1958c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1958c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1958c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1958c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1958C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1958CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958C8u;
        // 0x1958cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1958D0u;
}
