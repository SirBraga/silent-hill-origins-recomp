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

// Function: sub_0022F680
// Address: 0x22f680 - 0x22f778
void sub_0022F680_0x22f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F680_0x22f680");
#endif

    switch (ctx->pc) {
        case 0x22f698u: goto label_22f698;
        case 0x22f6c8u: goto label_22f6c8;
        case 0x22f758u: goto label_22f758;
        default: break;
    }

    ctx->pc = 0x22f680u;

    // 0x22f680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f684: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22f688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22f698:
    // 0x22f698: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22F698u;
    {
        const bool branch_taken_0x22f698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F698u;
        // 0x22f69c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f698) {
            ctx->pc = 0x22F6E8u;
            goto label_22f6e8;
        }
    }
    ctx->pc = 0x22F6A0u;
    // 0x22f6a0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22f6a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22f6a8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22f6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22f6ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22F6ACu;
    {
        const bool branch_taken_0x22f6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ACu;
        // 0x22f6b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ac) {
            ctx->pc = 0x22F6E8u;
            goto label_22f6e8;
        }
    }
    ctx->pc = 0x22F6B4u;
    // 0x22f6b4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f6b8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22f6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22f6bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22f6bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22f6c0: 0xf  sync
    ctx->pc = 0x22f6c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f6c4: 0x40f  sync.p
    ctx->pc = 0x22f6c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22f6c8:
    // 0x22f6c8: 0x0  nop
    ctx->pc = 0x22f6c8u;
    // NOP
    // 0x22f6cc: 0x0  nop
    ctx->pc = 0x22f6ccu;
    // NOP
    // 0x22f6d0: 0x0  nop
    ctx->pc = 0x22f6d0u;
    // NOP
    // 0x22f6d4: 0x0  nop
    ctx->pc = 0x22f6d4u;
    // NOP
    // 0x22f6d8: 0x0  nop
    ctx->pc = 0x22f6d8u;
    // NOP
    // 0x22f6dc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F6DCu;
    {
        const bool branch_taken_0x22f6dc = (false);
        if (branch_taken_0x22f6dc) {
            ctx->pc = 0x22F6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f6c8;
        }
    }
    ctx->pc = 0x22F6E4u;
    // 0x22f6e4: 0x0  nop
    ctx->pc = 0x22f6e4u;
    // NOP
label_22f6e8:
    // 0x22f6e8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x22f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22f6ec: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x22f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x22f6f0: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x22f6f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x22f6f4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22f6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22f6f8: 0x8cc63ed8  lw          $a2, 0x3ED8($a2)
    ctx->pc = 0x22f6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22f6fc: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x22f6fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
    // 0x22f700: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f704: 0x8c843edc  lw          $a0, 0x3EDC($a0)
    ctx->pc = 0x22f704u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EDCu));
    // 0x22f708: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x22f708u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22f70c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22f710: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x22f710u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22f714: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x22f714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x22f718: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x22f718u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22f71c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x22f71cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22f720: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F720u;
    {
        const bool branch_taken_0x22f720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F720u;
        // 0x22f724: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f720) {
            ctx->pc = 0x22F738u;
            goto label_22f738;
        }
    }
    ctx->pc = 0x22F728u;
    // 0x22f728: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f72c: 0xac263ed0  sw          $a2, 0x3ED0($at)
    ctx->pc = 0x22f72cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3ED0u, _value); } while (0);
    // 0x22f730: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22F730u;
    {
        const bool branch_taken_0x22f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F730u;
        // 0x22f734: 0xaf838e68  sw          $v1, -0x7198($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f730) {
            ctx->pc = 0x22F760u;
            goto label_22f760;
        }
    }
    ctx->pc = 0x22F738u;
label_22f738:
    // 0x22f738: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f73c: 0x8c423ec8  lw          $v0, 0x3EC8($v0)
    ctx->pc = 0x22f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EC8u));
    // 0x22f740: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x22f744: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x22f744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22f748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F748u;
    {
        const bool branch_taken_0x22f748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F748u;
        // 0x22f74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f748) {
            ctx->pc = 0x22F760u;
            goto label_22f760;
        }
    }
    ctx->pc = 0x22F750u;
    // 0x22f750: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22F750u;
    SET_GPR_U32(ctx, 31, 0x22F758u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22F750u, 0x22F758u)) {
        return;
    }
    ctx->pc = 0x22F758u;
label_22f758:
    // 0x22f758: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x22F758u;
    {
        const bool branch_taken_0x22f758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f758) {
            ctx->pc = 0x22F698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f698;
        }
    }
    ctx->pc = 0x22F760u;
label_22f760:
    // 0x22f760: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22f760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f76c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F76Cu;
        // 0x22f770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F774u;
    // 0x22f774: 0x0  nop
    ctx->pc = 0x22f774u;
    // NOP
    ctx->pc = 0x22f778u;
}
