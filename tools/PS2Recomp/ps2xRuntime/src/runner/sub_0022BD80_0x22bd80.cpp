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

// Function: sub_0022BD80
// Address: 0x22bd80 - 0x22be00
void sub_0022BD80_0x22bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD80_0x22bd80");
#endif

    ctx->pc = 0x22bd80u;

    // 0x22bd80: 0x8f8383f8  lw          $v1, -0x7C08($gp)
    ctx->pc = 0x22bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22bd84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22bd88: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x22bd88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22bd8c: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x22bd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x22bd90: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x22bd90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x22bd94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bd98: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x22bd98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22bd9c: 0x452807  srav        $a1, $a1, $v0
    ctx->pc = 0x22bd9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x22bda0: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x22bda0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x22bda4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x22bda4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x22bda8: 0x25082e70  addiu       $t0, $t0, 0x2E70
    ctx->pc = 0x22bda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11888));
    // 0x22bdac: 0x473807  srav        $a3, $a3, $v0
    ctx->pc = 0x22bdacu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x22bdb0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x22bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x22bdb4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x22bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22bdb8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x22bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22bdbc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x22bdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x22bdc0: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x22bdc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x22bdc4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x22bdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x22bdc8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x22bdc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22bdcc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x22bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x22bdd0: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x22bdd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22bdd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22bdd8: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x22bdd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22bddc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22bde0: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x22bde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x22bde4: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x22bde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x22bde8: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x22bde8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
    // 0x22bdec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22bdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22bdf0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x22bdf0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22bdf4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22bdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x22BDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDF8u;
        // 0x22bdfc: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BE00u;
}
