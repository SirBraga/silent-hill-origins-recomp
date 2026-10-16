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

// Function: sub_001F8C00
// Address: 0x1f8c00 - 0x1f8c90
void sub_001F8C00_0x1f8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8C00_0x1f8c00");
#endif

    switch (ctx->pc) {
        case 0x1f8c1cu: goto label_1f8c1c;
        case 0x1f8c48u: goto label_1f8c48;
        default: break;
    }

    ctx->pc = 0x1f8c00u;

    // 0x1f8c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8c04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f8c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f8c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f8c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8c10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8c14: 0xc07e9e0  jal         func_1FA780
    ctx->pc = 0x1F8C14u;
    SET_GPR_U32(ctx, 31, 0x1F8C1Cu);
    ctx->pc = 0x1F8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C14u;
    // 0x1f8c18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA780u, 0x1F8C14u, 0x1F8C1Cu)) {
        return;
    }
    ctx->pc = 0x1F8C1Cu;
label_1f8c1c:
    // 0x1f8c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c20: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8C20u;
    {
        const bool branch_taken_0x1f8c20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c20) {
            ctx->pc = 0x1F8C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C20u;
            // 0x1f8c24: 0x96040298  lhu         $a0, 0x298($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C30u;
            goto label_1f8c30;
        }
    }
    ctx->pc = 0x1F8C28u;
    // 0x1f8c28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F8C28u;
    {
        const bool branch_taken_0x1f8c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C28u;
        // 0x1f8c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c28) {
            ctx->pc = 0x1F8C78u;
            goto label_1f8c78;
        }
    }
    ctx->pc = 0x1F8C30u;
label_1f8c30:
    // 0x1f8c30: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1f8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1f8c34: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x1f8c34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x1f8c38: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8C38u;
    {
        const bool branch_taken_0x1f8c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C38u;
        // 0x1f8c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c38) {
            ctx->pc = 0x1F8C5Cu;
            goto label_1f8c5c;
        }
    }
    ctx->pc = 0x1F8C40u;
    // 0x1f8c40: 0xc07e2be  jal         func_1F8AF8
    ctx->pc = 0x1F8C40u;
    SET_GPR_U32(ctx, 31, 0x1F8C48u);
    ctx->pc = 0x1F8C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C40u;
    // 0x1f8c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8AF8u, 0x1F8C40u, 0x1F8C48u)) {
        return;
    }
    ctx->pc = 0x1F8C48u;
label_1f8c48:
    // 0x1f8c48: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1f8c48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8c4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f8c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f8c50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f8c50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f8c54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8C54u;
    {
        const bool branch_taken_0x1f8c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C54u;
        // 0x1f8c58: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c54) {
            ctx->pc = 0x1F8C64u;
            goto label_1f8c64;
        }
    }
    ctx->pc = 0x1F8C5Cu;
label_1f8c5c:
    // 0x1f8c5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8c60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f8c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f8c64:
    // 0x1f8c64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8c68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c6c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f8c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f8c70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8c74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1f8c78:
    // 0x1f8c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8c7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f8c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C84u;
        // 0x1f8c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8C8Cu;
    // 0x1f8c8c: 0x0  nop
    ctx->pc = 0x1f8c8cu;
    // NOP
    ctx->pc = 0x1f8c90u;
}
