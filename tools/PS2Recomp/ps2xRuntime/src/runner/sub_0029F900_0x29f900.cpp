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

// Function: sub_0029F900
// Address: 0x29f900 - 0x29f960
void sub_0029F900_0x29f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F900_0x29f900");
#endif

    switch (ctx->pc) {
        case 0x29f934u: goto label_29f934;
        default: break;
    }

    ctx->pc = 0x29f900u;

    // 0x29f900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29f904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29f908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f90c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x29f90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f910: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29f914: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x29f914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f918: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x29f918u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
    // 0x29f91c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29f91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f920: 0x2118804  sllv        $s1, $s1, $s0
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x29f924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29f928: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x29f928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29f92c: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x29F92Cu;
    SET_GPR_U32(ctx, 31, 0x29F934u);
    ctx->pc = 0x29F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F92Cu;
    // 0x29f930: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x29F92Cu, 0x29F934u)) {
        return;
    }
    ctx->pc = 0x29F934u;
label_29f934:
    // 0x29f934: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29f934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29f938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f93c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x29f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x29f940: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x29f940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x29f944: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29f944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f94c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x29f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x29f950: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x29f950u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x29f954: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x29f954u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x29f958: 0x3e00008  jr          $ra
    ctx->pc = 0x29F958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F958u;
        // 0x29f95c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F960u;
}
