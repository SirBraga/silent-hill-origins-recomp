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

// Function: sub_00161AF0
// Address: 0x161af0 - 0x161b50
void sub_00161AF0_0x161af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161AF0_0x161af0");
#endif

    switch (ctx->pc) {
        case 0x161b24u: goto label_161b24;
        case 0x161b40u: goto label_161b40;
        default: break;
    }

    ctx->pc = 0x161af0u;

    // 0x161af0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x161af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x161af4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161af8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x161af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161afc: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x161afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x161b00: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161B00u;
    {
        const bool branch_taken_0x161b00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x161B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B00u;
        // 0x161b04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b00) {
            ctx->pc = 0x161B18u;
            goto label_161b18;
        }
    }
    ctx->pc = 0x161B08u;
    // 0x161b08: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x161b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x161b0c: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x161b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8898u));
    // 0x161b10: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161B10u;
    {
        const bool branch_taken_0x161b10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x161B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B10u;
        // 0x161b14: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b10) {
            ctx->pc = 0x161B2Cu;
            goto label_161b2c;
        }
    }
    ctx->pc = 0x161B18u;
label_161b18:
    // 0x161b18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x161b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x161b1c: 0xc0586d4  jal         func_161B50
    ctx->pc = 0x161B1Cu;
    SET_GPR_U32(ctx, 31, 0x161B24u);
    ctx->pc = 0x161B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B1Cu;
    // 0x161b20: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x161B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x161B50u, 0x161B1Cu, 0x161B24u)) {
        return;
    }
    ctx->pc = 0x161B24u;
label_161b24:
    // 0x161b24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161B24u;
    {
        const bool branch_taken_0x161b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B24u;
        // 0x161b28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b24) {
            ctx->pc = 0x161B44u;
            goto label_161b44;
        }
    }
    ctx->pc = 0x161B2Cu;
label_161b2c:
    // 0x161b2c: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x161b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
    // 0x161b30: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161B30u;
    {
        const bool branch_taken_0x161b30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x161B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B30u;
        // 0x161b34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b30) {
            ctx->pc = 0x161B44u;
            goto label_161b44;
        }
    }
    ctx->pc = 0x161B38u;
    // 0x161b38: 0xc058404  jal         func_161010
    ctx->pc = 0x161B38u;
    SET_GPR_U32(ctx, 31, 0x161B40u);
    ctx->pc = 0x161010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x161010u, 0x161B38u, 0x161B40u)) {
        return;
    }
    ctx->pc = 0x161B40u;
label_161b40:
    // 0x161b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161b44:
    // 0x161b44: 0x3e00008  jr          $ra
    ctx->pc = 0x161B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B44u;
        // 0x161b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161B4Cu;
    // 0x161b4c: 0x0  nop
    ctx->pc = 0x161b4cu;
    // NOP
    ctx->pc = 0x161b50u;
}
