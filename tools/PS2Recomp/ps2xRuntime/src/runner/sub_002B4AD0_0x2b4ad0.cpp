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

// Function: sub_002B4AD0
// Address: 0x2b4ad0 - 0x2b4b40
void sub_002B4AD0_0x2b4ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4AD0_0x2b4ad0");
#endif

    switch (ctx->pc) {
        case 0x2b4ad0u: goto label_2b4ad0;
        case 0x2b4ad4u: goto label_2b4ad4;
        case 0x2b4ad8u: goto label_2b4ad8;
        case 0x2b4adcu: goto label_2b4adc;
        case 0x2b4ae0u: goto label_2b4ae0;
        case 0x2b4ae4u: goto label_2b4ae4;
        case 0x2b4ae8u: goto label_2b4ae8;
        case 0x2b4aecu: goto label_2b4aec;
        case 0x2b4af0u: goto label_2b4af0;
        case 0x2b4af4u: goto label_2b4af4;
        case 0x2b4af8u: goto label_2b4af8;
        case 0x2b4afcu: goto label_2b4afc;
        case 0x2b4b00u: goto label_2b4b00;
        case 0x2b4b04u: goto label_2b4b04;
        case 0x2b4b08u: goto label_2b4b08;
        case 0x2b4b0cu: goto label_2b4b0c;
        case 0x2b4b10u: goto label_2b4b10;
        case 0x2b4b14u: goto label_2b4b14;
        case 0x2b4b18u: goto label_2b4b18;
        case 0x2b4b1cu: goto label_2b4b1c;
        case 0x2b4b20u: goto label_2b4b20;
        case 0x2b4b24u: goto label_2b4b24;
        case 0x2b4b28u: goto label_2b4b28;
        case 0x2b4b2cu: goto label_2b4b2c;
        case 0x2b4b30u: goto label_2b4b30;
        case 0x2b4b34u: goto label_2b4b34;
        case 0x2b4b38u: goto label_2b4b38;
        case 0x2b4b3cu: goto label_2b4b3c;
        default: break;
    }

    ctx->pc = 0x2b4ad0u;

label_2b4ad0:
    // 0x2b4ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b4ad4:
    // 0x2b4ad4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2b4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2b4ad8:
    // 0x2b4ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b4adc:
    // 0x2b4adc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b4adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b4ae0:
    // 0x2b4ae0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2b4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2b4ae4:
    // 0x2b4ae4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2b4ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2b4ae8:
    // 0x2b4ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b4aec:
    // 0x2b4aec: 0x40f809  jalr        $v0
label_2b4af0:
    if (ctx->pc == 0x2B4AF0u) {
        ctx->pc = 0x2B4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AECu;
        // 0x2b4af0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4AF4u;
        goto label_2b4af4;
    }
    ctx->pc = 0x2B4AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B4AF4u);
        ctx->pc = 0x2B4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AECu;
        // 0x2b4af0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4AECu, 0x2B4AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4AF4u;
label_2b4af4:
    // 0x2b4af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4af8:
    // 0x2b4af8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_2b4afc:
    if (ctx->pc == 0x2B4AFCu) {
        ctx->pc = 0x2B4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AF8u;
        // 0x2b4afc: 0x90001b  divu        $zero, $a0, $s0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4B00u;
        goto label_2b4b00;
    }
    ctx->pc = 0x2B4AF8u;
    {
        const bool branch_taken_0x2b4af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4af8) {
            ctx->pc = 0x2B4AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4AF8u;
            // 0x2b4afc: 0x90001b  divu        $zero, $a0, $s0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B08u;
            goto label_2b4b08;
        }
    }
    ctx->pc = 0x2B4B00u;
label_2b4b00:
    // 0x2b4b00: 0x1000000a  b           . + 4 + (0xA << 2)
label_2b4b04:
    if (ctx->pc == 0x2B4B04u) {
        ctx->pc = 0x2B4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B00u;
        // 0x2b4b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4B08u;
        goto label_2b4b08;
    }
    ctx->pc = 0x2B4B00u;
    {
        const bool branch_taken_0x2b4b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B00u;
        // 0x2b4b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b00) {
            ctx->pc = 0x2B4B2Cu;
            goto label_2b4b2c;
        }
    }
    ctx->pc = 0x2B4B08u;
label_2b4b08:
    // 0x2b4b08: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2b4b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2b4b0c:
    // 0x2b4b0c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_2b4b10:
    if (ctx->pc == 0x2B4B10u) {
        ctx->pc = 0x2B4B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B0Cu;
        // 0x2b4b10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4B14u;
        goto label_2b4b14;
    }
    ctx->pc = 0x2B4B0Cu;
    {
        const bool branch_taken_0x2b4b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b0c) {
            ctx->pc = 0x2B4B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4B0Cu;
            // 0x2b4b10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B14u;
            goto label_2b4b14;
        }
    }
    ctx->pc = 0x2B4B14u;
label_2b4b14:
    // 0x2b4b14: 0x1810  mfhi        $v1
    ctx->pc = 0x2b4b14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2b4b18:
    // 0x2b4b18: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2b4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2b4b1c:
    // 0x2b4b1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b4b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b4b20:
    // 0x2b4b20: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x2b4b20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_2b4b24:
    // 0x2b4b24: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2b4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b4b28:
    // 0x2b4b28: 0xa043ffff  sb          $v1, -0x1($v0)
    ctx->pc = 0x2b4b28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 3));
label_2b4b2c:
    // 0x2b4b2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4b30:
    // 0x2b4b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4b34:
    // 0x2b4b34: 0x3e00008  jr          $ra
label_2b4b38:
    if (ctx->pc == 0x2B4B38u) {
        ctx->pc = 0x2B4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B34u;
        // 0x2b4b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4B3Cu;
        goto label_2b4b3c;
    }
    ctx->pc = 0x2B4B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B34u;
        // 0x2b4b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4B3Cu;
label_2b4b3c:
    // 0x2b4b3c: 0x0  nop
    ctx->pc = 0x2b4b3cu;
    // NOP
    ctx->pc = 0x2b4b40u;
}
