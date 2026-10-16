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

// Function: sub_002EA348
// Address: 0x2ea348 - 0x2ea3f8
void sub_002EA348_0x2ea348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA348_0x2ea348");
#endif

    switch (ctx->pc) {
        case 0x2ea39cu: goto label_2ea39c;
        case 0x2ea3a4u: goto label_2ea3a4;
        case 0x2ea3c8u: goto label_2ea3c8;
        case 0x2ea3d0u: goto label_2ea3d0;
        default: break;
    }

    ctx->pc = 0x2ea348u;

    // 0x2ea348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ea348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ea34c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ea350: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ea350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ea354: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea358: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ea358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea35c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ea35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ea360: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ea360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ea364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea368: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ea368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ea36c: 0x8e431044  lw          $v1, 0x1044($s2)
    ctx->pc = 0x2ea36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4164)));
    // 0x2ea370: 0x2450e480  addiu       $s0, $v0, -0x1B80
    ctx->pc = 0x2ea370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x2ea374: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ea374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea378: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x2ea378u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x2ea37c: 0xac43e480  sw          $v1, -0x1B80($v0)
    ctx->pc = 0x2ea37cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x70E480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70E480u, _value); } while (0);
    // 0x2ea380: 0x2118825  or          $s1, $s0, $s1
    ctx->pc = 0x2ea380u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x2ea384: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2ea384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x70E484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70E484u, _value); } while (0);
    // 0x2ea388: 0x260500bf  addiu       $a1, $s0, 0xBF
    ctx->pc = 0x2ea388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    // 0x2ea38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea390: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2ea390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ea394: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2EA394u;
    SET_GPR_U32(ctx, 31, 0x2EA39Cu);
    ctx->pc = 0x2EA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA394u;
    // 0x2ea398: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EA394u, 0x2EA39Cu)) {
        return;
    }
    ctx->pc = 0x2EA39Cu;
label_2ea39c:
    // 0x2ea39c: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2EA39Cu;
    SET_GPR_U32(ctx, 31, 0x2EA3A4u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2EA39Cu, 0x2EA3A4u)) {
        return;
    }
    ctx->pc = 0x2EA3A4u;
label_2ea3a4:
    // 0x2ea3a4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x2ea3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
    // 0x2ea3a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ea3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ea3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3b0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2ea3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2ea3b4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2ea3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ea3b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea3b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ea3bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3c0: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EA3C0u;
    SET_GPR_U32(ctx, 31, 0x2EA3C8u);
    ctx->pc = 0x2EA3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3C0u;
    // 0x2ea3c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EA3C0u, 0x2EA3C8u)) {
        return;
    }
    ctx->pc = 0x2EA3C8u;
label_2ea3c8:
    // 0x2ea3c8: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2EA3C8u;
    SET_GPR_U32(ctx, 31, 0x2EA3D0u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2EA3C8u, 0x2EA3D0u)) {
        return;
    }
    ctx->pc = 0x2EA3D0u;
label_2ea3d0:
    // 0x2ea3d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ea3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ea3d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ea3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ea3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea3dc: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x2ea3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x2ea3e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ea3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea3e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ea3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea3e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ea3e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3F0u;
        // 0x2ea3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA3F8u;
}
