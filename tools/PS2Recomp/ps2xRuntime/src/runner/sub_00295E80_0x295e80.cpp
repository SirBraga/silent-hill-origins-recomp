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

// Function: sub_00295E80
// Address: 0x295e80 - 0x295ef8
void sub_00295E80_0x295e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295E80_0x295e80");
#endif

    switch (ctx->pc) {
        case 0x295ea4u: goto label_295ea4;
        case 0x295ec0u: goto label_295ec0;
        case 0x295ed0u: goto label_295ed0;
        default: break;
    }

    ctx->pc = 0x295e80u;

    // 0x295e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x295e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x295e84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x295e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295e88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295e8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x295e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295e90: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x295e90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x295e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295e98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x295e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x295e9c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x295E9Cu;
    SET_GPR_U32(ctx, 31, 0x295EA4u);
    ctx->pc = 0x295EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E9Cu;
    // 0x295ea0: 0xae32e7e4  sw          $s2, -0x181C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961124), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x295E9Cu, 0x295EA4u)) {
        return;
    }
    ctx->pc = 0x295EA4u;
label_295ea4:
    // 0x295ea4: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x295ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x295ea8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x295eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295eb0: 0x24a55e28  addiu       $a1, $a1, 0x5E28
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24104));
    // 0x295eb4: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x295eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x295eb8: 0xc0c8fc6  jal         func_323F18
    ctx->pc = 0x295EB8u;
    SET_GPR_U32(ctx, 31, 0x295EC0u);
    ctx->pc = 0x295EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295EB8u;
    // 0x295ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F18u, 0x295EB8u, 0x295EC0u)) {
        return;
    }
    ctx->pc = 0x295EC0u;
label_295ec0:
    // 0x295ec0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295EC0u;
    {
        const bool branch_taken_0x295ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EC0u;
        // 0x295ec4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ec0) {
            ctx->pc = 0x295ED4u;
            goto label_295ed4;
        }
    }
    ctx->pc = 0x295EC8u;
    // 0x295ec8: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x295EC8u;
    SET_GPR_U32(ctx, 31, 0x295ED0u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x295EC8u, 0x295ED0u)) {
        return;
    }
    ctx->pc = 0x295ED0u;
label_295ed0:
    // 0x295ed0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x295ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_295ed4:
    // 0x295ed4: 0xae20e7e4  sw          $zero, -0x181C($s1)
    ctx->pc = 0x295ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961124), GPR_U32(ctx, 0));
    // 0x295ed8: 0xac52e808  sw          $s2, -0x17F8($v0)
    ctx->pc = 0x295ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 18));
    // 0x295edc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x295edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ee4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295ee8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x295EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EF0u;
        // 0x295ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295EF8u;
}
