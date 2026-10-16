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

// Function: sub_002EFE70
// Address: 0x2efe70 - 0x2efef0
void sub_002EFE70_0x2efe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFE70_0x2efe70");
#endif

    switch (ctx->pc) {
        case 0x2efea0u: goto label_2efea0;
        case 0x2efeb4u: goto label_2efeb4;
        case 0x2efec0u: goto label_2efec0;
        case 0x2efeccu: goto label_2efecc;
        default: break;
    }

    ctx->pc = 0x2efe70u;

    // 0x2efe70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efe74: 0x8f858cd0  lw          $a1, -0x7330($gp)
    ctx->pc = 0x2efe74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x2efe78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2efe7c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2efe7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2efe80: 0x8f878cd4  lw          $a3, -0x732C($gp)
    ctx->pc = 0x2efe80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
    // 0x2efe84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efe84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe88: 0x8f8890ac  lw          $t0, -0x6F54($gp)
    ctx->pc = 0x2efe88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
    // 0x2efe8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2efe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2efe90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2efe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2efe94: 0x35290135  ori         $t1, $t1, 0x135
    ctx->pc = 0x2efe94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)309);
    // 0x2efe98: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x2EFE98u;
    SET_GPR_U32(ctx, 31, 0x2EFEA0u);
    ctx->pc = 0x2EFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE98u;
    // 0x2efe9c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x2EFE98u, 0x2EFEA0u)) {
        return;
    }
    ctx->pc = 0x2EFEA0u;
label_2efea0:
    // 0x2efea0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2efea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2efea4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2efea4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2efea8: 0x24846290  addiu       $a0, $a0, 0x6290
    ctx->pc = 0x2efea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25232));
    // 0x2efeac: 0xc0bba02  jal         func_2EE808
    ctx->pc = 0x2EFEACu;
    SET_GPR_U32(ctx, 31, 0x2EFEB4u);
    ctx->pc = 0x2EFEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFEACu;
    // 0x2efeb0: 0xaf8290ac  sw          $v0, -0x6F54($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE808u, 0x2EFEACu, 0x2EFEB4u)) {
        return;
    }
    ctx->pc = 0x2EFEB4u;
label_2efeb4:
    // 0x2efeb4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2efeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2efeb8: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x2EFEB8u;
    SET_GPR_U32(ctx, 31, 0x2EFEC0u);
    ctx->pc = 0x2EFEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFEB8u;
    // 0x2efebc: 0x248462c8  addiu       $a0, $a0, 0x62C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x2EFEB8u, 0x2EFEC0u)) {
        return;
    }
    ctx->pc = 0x2EFEC0u;
label_2efec0:
    // 0x2efec0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2efec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2efec4: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x2EFEC4u;
    SET_GPR_U32(ctx, 31, 0x2EFECCu);
    ctx->pc = 0x2EFEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFEC4u;
    // 0x2efec8: 0x248462f8  addiu       $a0, $a0, 0x62F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x2EFEC4u, 0x2EFECCu)) {
        return;
    }
    ctx->pc = 0x2EFECCu;
label_2efecc:
    // 0x2efecc: 0x8f838ccc  lw          $v1, -0x7334($gp)
    ctx->pc = 0x2efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x2efed0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2efed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efed4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2efed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efed8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2efed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2efedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efee0: 0xaf838ccc  sw          $v1, -0x7334($gp)
    ctx->pc = 0x2efee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937804), GPR_U32(ctx, 3));
    // 0x2efee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFEE4u;
        // 0x2efee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFEECu;
    // 0x2efeec: 0x0  nop
    ctx->pc = 0x2efeecu;
    // NOP
    ctx->pc = 0x2efef0u;
}
