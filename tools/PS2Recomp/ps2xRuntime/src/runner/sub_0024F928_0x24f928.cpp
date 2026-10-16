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

// Function: sub_0024F928
// Address: 0x24f928 - 0x24f9a0
void sub_0024F928_0x24f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F928_0x24f928");
#endif

    switch (ctx->pc) {
        case 0x24f978u: goto label_24f978;
        case 0x24f980u: goto label_24f980;
        default: break;
    }

    ctx->pc = 0x24f928u;

    // 0x24f928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f92c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x24f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x24f930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f934: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x24f934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x24f938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f93c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24f940: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24f940u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 4)); // MMIO: 0x10003c10
    // 0x24f944: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x24f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
    // 0x24f948: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24f948u;
    runtime->Store32(rdram, ctx, 0x10003810u, GPR_U32(ctx, 4)); // MMIO: 0x10003810
    // 0x24f94c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x24f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x24f950: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x24f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x24f954: 0x4843e000  cfc2.ni     $v1, $vi28
    ctx->pc = 0x24f954u;
    SET_GPR_U32(ctx, 3, ctx->vu0_fbrst);
    // 0x24f958: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24f958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x24f95c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x24f95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x24f960: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x24f960u;
    ctx->vu0_fbrst = GPR_U32(ctx, 3) & 0x00000C0Cu;
    // 0x24f964: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x24f964u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x24f968: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24f96c: 0x48c2e000  ctc2.ni     $v0, $vi28
    ctx->pc = 0x24f96cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 2) & 0x00000C0Cu;
    // 0x24f970: 0xc0a517c  jal         func_2945F0
    ctx->pc = 0x24F970u;
    SET_GPR_U32(ctx, 31, 0x24F978u);
    ctx->pc = 0x2945F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2945F0u, 0x24F970u, 0x24F978u)) {
        return;
    }
    ctx->pc = 0x24F978u;
label_24f978:
    // 0x24f978: 0xc0a5cd6  jal         func_297358
    ctx->pc = 0x24F978u;
    SET_GPR_U32(ctx, 31, 0x24F980u);
    ctx->pc = 0x24F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F978u;
    // 0x24f97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297358u, 0x24F978u, 0x24F980u)) {
        return;
    }
    ctx->pc = 0x24F980u;
label_24f980:
    // 0x24f980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f984: 0x3e00008  jr          $ra
    ctx->pc = 0x24F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F984u;
        // 0x24f988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F98Cu;
    // 0x24f98c: 0x0  nop
    ctx->pc = 0x24f98cu;
    // NOP
    // 0x24f990: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24f994: 0x0  nop
    ctx->pc = 0x24f994u;
    // NOP
    // 0x24f998: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x24f998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24f99c: 0x0  nop
    ctx->pc = 0x24f99cu;
    // NOP
    ctx->pc = 0x24f9a0u;
}
