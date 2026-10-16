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

// Function: sub_003268C8
// Address: 0x3268c8 - 0x326968
void sub_003268C8_0x3268c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003268C8_0x3268c8");
#endif

    switch (ctx->pc) {
        case 0x326904u: goto label_326904;
        case 0x32691cu: goto label_32691c;
        case 0x326930u: goto label_326930;
        default: break;
    }

    ctx->pc = 0x3268c8u;

    // 0x3268c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3268c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3268cc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3268ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3268d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3268d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3268d4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x3268d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3268d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3268dc: 0x2453753c  addiu       $s3, $v0, 0x753C
    ctx->pc = 0x3268dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30012));
    // 0x3268e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3268e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3268e4: 0x2471d6a8  addiu       $s1, $v1, -0x2958
    ctx->pc = 0x3268e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956712));
    // 0x3268e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3268e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3268ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3268ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3268f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3268f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3268f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3268f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3268f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3268f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3268fc: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x3268FCu;
    SET_GPR_U32(ctx, 31, 0x326904u);
    ctx->pc = 0x326900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3268FCu;
    // 0x326900: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x3268FCu, 0x326904u)) {
        return;
    }
    ctx->pc = 0x326904u;
label_326904:
    // 0x326904: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x326904u;
    {
        const bool branch_taken_0x326904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326904u;
        // 0x326908: 0x3c100068  lui         $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326904) {
            ctx->pc = 0x326934u;
            goto label_326934;
        }
    }
    ctx->pc = 0x32690Cu;
    // 0x32690c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326910: 0x8e0575fc  lw          $a1, 0x75FC($s0)
    ctx->pc = 0x326910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30204)));
    // 0x326914: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x326914u;
    SET_GPR_U32(ctx, 31, 0x32691Cu);
    ctx->pc = 0x326918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326914u;
    // 0x326918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x326914u, 0x32691Cu)) {
        return;
    }
    ctx->pc = 0x32691Cu;
label_32691c:
    // 0x32691c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32691Cu;
    {
        const bool branch_taken_0x32691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32691Cu;
        // 0x326920: 0x8e0575fc  lw          $a1, 0x75FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32691c) {
            ctx->pc = 0x326934u;
            goto label_326934;
        }
    }
    ctx->pc = 0x326924u;
    // 0x326924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326928: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x326928u;
    SET_GPR_U32(ctx, 31, 0x326930u);
    ctx->pc = 0x32692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326928u;
    // 0x32692c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x326928u, 0x326930u)) {
        return;
    }
    ctx->pc = 0x326930u;
label_326930:
    // 0x326930: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x326930u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_326934:
    // 0x326934: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x326934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326938: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x326938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32693c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x32693cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x326940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326944: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x326944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32694c: 0x3e00008  jr          $ra
    ctx->pc = 0x32694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32694Cu;
        // 0x326950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326954u;
    // 0x326954: 0x0  nop
    ctx->pc = 0x326954u;
    // NOP
    // 0x326958: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x326958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32695c: 0x0  nop
    ctx->pc = 0x32695cu;
    // NOP
    // 0x326960: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326964: 0x0  nop
    ctx->pc = 0x326964u;
    // NOP
    ctx->pc = 0x326968u;
}
