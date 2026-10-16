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

// Function: sub_00147438
// Address: 0x147438 - 0x1474c8
void sub_00147438_0x147438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147438_0x147438");
#endif

    switch (ctx->pc) {
        case 0x147474u: goto label_147474;
        case 0x147484u: goto label_147484;
        case 0x1474a4u: goto label_1474a4;
        case 0x1474b4u: goto label_1474b4;
        default: break;
    }

    ctx->pc = 0x147438u;

    // 0x147438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14743c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x147440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147444: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x147444u;
    {
        const bool branch_taken_0x147444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147444u;
        // 0x147448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147444) {
            ctx->pc = 0x14748Cu;
            goto label_14748c;
        }
    }
    ctx->pc = 0x14744Cu;
    // 0x14744c: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x14744cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x147450: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x147454: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x147454u;
    {
        const bool branch_taken_0x147454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147454) {
            ctx->pc = 0x147458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147454u;
            // 0x147458: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474B8u;
            goto label_1474b8;
        }
    }
    ctx->pc = 0x14745Cu;
    // 0x14745c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14745cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x147460: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x147460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x147464: 0x8c448bc4  lw          $a0, -0x743C($v0)
    ctx->pc = 0x147464u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338BC4u));
    // 0x147468: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x147468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14746c: 0xc066544  jal         func_199510
    ctx->pc = 0x14746Cu;
    SET_GPR_U32(ctx, 31, 0x147474u);
    ctx->pc = 0x147470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14746Cu;
    // 0x147470: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199510u, 0x14746Cu, 0x147474u)) {
        return;
    }
    ctx->pc = 0x147474u;
label_147474:
    // 0x147474: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x147474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x147478: 0x96060060  lhu         $a2, 0x60($s0)
    ctx->pc = 0x147478u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x14747c: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x14747Cu;
    SET_GPR_U32(ctx, 31, 0x147484u);
    ctx->pc = 0x147480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14747Cu;
    // 0x147480: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x14747Cu, 0x147484u)) {
        return;
    }
    ctx->pc = 0x147484u;
label_147484:
    // 0x147484: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x147484u;
    {
        const bool branch_taken_0x147484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147484u;
        // 0x147488: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147484) {
            ctx->pc = 0x1474B8u;
            goto label_1474b8;
        }
    }
    ctx->pc = 0x14748Cu;
label_14748c:
    // 0x14748c: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x14748cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x147490: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x147494: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x147494u;
    {
        const bool branch_taken_0x147494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x147494) {
            ctx->pc = 0x147498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147494u;
            // 0x147498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474B8u;
            goto label_1474b8;
        }
    }
    ctx->pc = 0x14749Cu;
    // 0x14749c: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x14749Cu;
    SET_GPR_U32(ctx, 31, 0x1474A4u);
    ctx->pc = 0x1474A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14749Cu;
    // 0x1474a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x14749Cu, 0x1474A4u)) {
        return;
    }
    ctx->pc = 0x1474A4u;
label_1474a4:
    // 0x1474a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1474a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1474a8: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1474ac: 0xc06659a  jal         func_199668
    ctx->pc = 0x1474ACu;
    SET_GPR_U32(ctx, 31, 0x1474B4u);
    ctx->pc = 0x1474B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474ACu;
    // 0x1474b0: 0x8c648bc4  lw          $a0, -0x743C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199668u, 0x1474ACu, 0x1474B4u)) {
        return;
    }
    ctx->pc = 0x1474B4u;
label_1474b4:
    // 0x1474b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1474b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1474b8:
    // 0x1474b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1474b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1474bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1474BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1474C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474BCu;
        // 0x1474c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1474BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1474C4u;
    // 0x1474c4: 0x0  nop
    ctx->pc = 0x1474c4u;
    // NOP
    ctx->pc = 0x1474c8u;
}
