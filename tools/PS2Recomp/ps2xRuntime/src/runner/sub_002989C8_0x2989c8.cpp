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

// Function: sub_002989C8
// Address: 0x2989c8 - 0x298a78
void sub_002989C8_0x2989c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002989C8_0x2989c8");
#endif

    switch (ctx->pc) {
        case 0x298a0cu: goto label_298a0c;
        case 0x298a28u: goto label_298a28;
        case 0x298a5cu: goto label_298a5c;
        default: break;
    }

    ctx->pc = 0x2989c8u;

    // 0x2989c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2989c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2989cc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2989ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2989d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2989d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2989d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2989d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2989d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2989d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2989dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2989dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2989e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2989e4: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x2989e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x2989e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2989E8u;
    {
        const bool branch_taken_0x2989e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989E8u;
        // 0x2989ec: 0x58e03  sra         $s1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989e8) {
            ctx->pc = 0x2989F8u;
            goto label_2989f8;
        }
    }
    ctx->pc = 0x2989F0u;
    // 0x2989f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2989F0u;
    {
        const bool branch_taken_0x2989f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989F0u;
        // 0x2989f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989f0) {
            ctx->pc = 0x298A10u;
            goto label_298a10;
        }
    }
    ctx->pc = 0x2989F8u;
label_2989f8:
    // 0x2989f8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2989fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2989FCu;
    {
        const bool branch_taken_0x2989fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989FCu;
        // 0x298a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989fc) {
            ctx->pc = 0x298A10u;
            goto label_298a10;
        }
    }
    ctx->pc = 0x298A04u;
    // 0x298a04: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298A04u;
    SET_GPR_U32(ctx, 31, 0x298A0Cu);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298A04u, 0x298A0Cu)) {
        return;
    }
    ctx->pc = 0x298A0Cu;
label_298a0c:
    // 0x298a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_298a10:
    // 0x298a10: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x298A10u;
    {
        const bool branch_taken_0x298a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A10u;
        // 0x298a14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a10) {
            ctx->pc = 0x298A60u;
            goto label_298a60;
        }
    }
    ctx->pc = 0x298A18u;
    // 0x298a18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x298a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a20: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x298A20u;
    SET_GPR_U32(ctx, 31, 0x298A28u);
    ctx->pc = 0x298A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A20u;
    // 0x298a24: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x298A20u, 0x298A28u)) {
        return;
    }
    ctx->pc = 0x298A28u;
label_298a28:
    // 0x298a28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x298a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298a2c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298A2Cu;
    {
        const bool branch_taken_0x298a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x298A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A2Cu;
        // 0x298a30: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a2c) {
            ctx->pc = 0x298A44u;
            goto label_298a44;
        }
    }
    ctx->pc = 0x298A34u;
    // 0x298a34: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x298a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x298a38: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x298a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x298a3c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x298a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x298a40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_298a44:
    // 0x298a44: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x298a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x298a48: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x298a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x298a4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298A4Cu;
    {
        const bool branch_taken_0x298a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A4Cu;
        // 0x298a50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a4c) {
            ctx->pc = 0x298A60u;
            goto label_298a60;
        }
    }
    ctx->pc = 0x298A54u;
    // 0x298a54: 0xc0a6658  jal         func_299960
    ctx->pc = 0x298A54u;
    SET_GPR_U32(ctx, 31, 0x298A5Cu);
    ctx->pc = 0x298A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A54u;
    // 0x298a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x298A54u, 0x298A5Cu)) {
        return;
    }
    ctx->pc = 0x298A5Cu;
label_298a5c:
    // 0x298a5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298a60:
    // 0x298a60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298a64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x298A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A6Cu;
        // 0x298a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298A74u;
    // 0x298a74: 0x0  nop
    ctx->pc = 0x298a74u;
    // NOP
    ctx->pc = 0x298a78u;
}
