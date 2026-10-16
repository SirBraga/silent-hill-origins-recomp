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

// Function: sub_0024DE20
// Address: 0x24de20 - 0x24de98
void sub_0024DE20_0x24de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DE20_0x24de20");
#endif

    switch (ctx->pc) {
        case 0x24de20u: goto label_24de20;
        case 0x24de24u: goto label_24de24;
        case 0x24de28u: goto label_24de28;
        case 0x24de2cu: goto label_24de2c;
        case 0x24de30u: goto label_24de30;
        case 0x24de34u: goto label_24de34;
        case 0x24de38u: goto label_24de38;
        case 0x24de3cu: goto label_24de3c;
        case 0x24de40u: goto label_24de40;
        case 0x24de44u: goto label_24de44;
        case 0x24de48u: goto label_24de48;
        case 0x24de4cu: goto label_24de4c;
        case 0x24de50u: goto label_24de50;
        case 0x24de54u: goto label_24de54;
        case 0x24de58u: goto label_24de58;
        case 0x24de5cu: goto label_24de5c;
        case 0x24de60u: goto label_24de60;
        case 0x24de64u: goto label_24de64;
        case 0x24de68u: goto label_24de68;
        case 0x24de6cu: goto label_24de6c;
        case 0x24de70u: goto label_24de70;
        case 0x24de74u: goto label_24de74;
        case 0x24de78u: goto label_24de78;
        case 0x24de7cu: goto label_24de7c;
        case 0x24de80u: goto label_24de80;
        case 0x24de84u: goto label_24de84;
        case 0x24de88u: goto label_24de88;
        case 0x24de8cu: goto label_24de8c;
        case 0x24de90u: goto label_24de90;
        case 0x24de94u: goto label_24de94;
        default: break;
    }

    ctx->pc = 0x24de20u;

label_24de20:
    // 0x24de20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24de24:
    // 0x24de24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24de28:
    // 0x24de28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24de2c:
    // 0x24de2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24de2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24de30:
    // 0x24de30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24de34:
    // 0x24de34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24de38:
    // 0x24de38: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x24de38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_24de3c:
    // 0x24de3c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_24de40:
    if (ctx->pc == 0x24DE40u) {
        ctx->pc = 0x24DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE3Cu;
        // 0x24de40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE44u;
        goto label_24de44;
    }
    ctx->pc = 0x24DE3Cu;
    {
        const bool branch_taken_0x24de3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE3Cu;
        // 0x24de40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de3c) {
            ctx->pc = 0x24DE78u;
            goto label_24de78;
        }
    }
    ctx->pc = 0x24DE44u;
label_24de44:
    // 0x24de44: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24de48:
    // 0x24de48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24de4c:
    if (ctx->pc == 0x24DE4Cu) {
        ctx->pc = 0x24DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE48u;
        // 0x24de4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE50u;
        goto label_24de50;
    }
    ctx->pc = 0x24DE48u;
    {
        const bool branch_taken_0x24de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE48u;
        // 0x24de4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de48) {
            ctx->pc = 0x24DE6Cu;
            goto label_24de6c;
        }
    }
    ctx->pc = 0x24DE50u;
label_24de50:
    // 0x24de50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24de50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24de54:
    // 0x24de54: 0x40f809  jalr        $v0
label_24de58:
    if (ctx->pc == 0x24DE58u) {
        ctx->pc = 0x24DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE54u;
        // 0x24de58: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE5Cu;
        goto label_24de5c;
    }
    ctx->pc = 0x24DE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DE5Cu);
        ctx->pc = 0x24DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE54u;
        // 0x24de58: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DE54u, 0x24DE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DE5Cu;
label_24de5c:
    // 0x24de5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24de5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24de60:
    // 0x24de60: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_24de64:
    if (ctx->pc == 0x24DE64u) {
        ctx->pc = 0x24DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE60u;
        // 0x24de64: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE68u;
        goto label_24de68;
    }
    ctx->pc = 0x24DE60u;
    {
        const bool branch_taken_0x24de60 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE60u;
        // 0x24de64: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de60) {
            ctx->pc = 0x24DE6Cu;
            goto label_24de6c;
        }
    }
    ctx->pc = 0x24DE68u;
label_24de68:
    // 0x24de68: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x24de68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24de6c:
    // 0x24de6c: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x24de6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24de70:
    // 0x24de70: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_24de74:
    if (ctx->pc == 0x24DE74u) {
        ctx->pc = 0x24DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE70u;
        // 0x24de74: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE78u;
        goto label_24de78;
    }
    ctx->pc = 0x24DE70u;
    {
        const bool branch_taken_0x24de70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24de70) {
            ctx->pc = 0x24DE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DE70u;
            // 0x24de74: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24de48;
        }
    }
    ctx->pc = 0x24DE78u;
label_24de78:
    // 0x24de78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24de78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24de7c:
    // 0x24de7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24de7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24de80:
    // 0x24de80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24de80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24de84:
    // 0x24de84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24de84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24de88:
    // 0x24de88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24de88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24de8c:
    // 0x24de8c: 0x3e00008  jr          $ra
label_24de90:
    if (ctx->pc == 0x24DE90u) {
        ctx->pc = 0x24DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE8Cu;
        // 0x24de90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE94u;
        goto label_24de94;
    }
    ctx->pc = 0x24DE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE8Cu;
        // 0x24de90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DE94u;
label_24de94:
    // 0x24de94: 0x0  nop
    ctx->pc = 0x24de94u;
    // NOP
    ctx->pc = 0x24de98u;
}
