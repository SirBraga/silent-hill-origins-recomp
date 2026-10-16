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

// Function: sub_001C4E80
// Address: 0x1c4e80 - 0x1c4f24
void sub_001C4E80_0x1c4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4E80_0x1c4e80");
#endif

    switch (ctx->pc) {
        case 0x1c4ebcu: goto label_1c4ebc;
        case 0x1c4eccu: goto label_1c4ecc;
        case 0x1c4edcu: goto label_1c4edc;
        case 0x1c4eecu: goto label_1c4eec;
        case 0x1c4efcu: goto label_1c4efc;
        case 0x1c4f0cu: goto label_1c4f0c;
        case 0x1c4f1cu: goto label_1c4f1c;
        default: break;
    }

    ctx->pc = 0x1c4e80u;

    // 0x1c4e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4e84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c4e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4e8c: 0x8cc302d8  lw          $v1, 0x2D8($a2)
    ctx->pc = 0x1c4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
    // 0x1c4e90: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1c4e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c4e94: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C4E94u;
    {
        const bool branch_taken_0x1c4e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E94u;
        // 0x1c4e98: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e94) {
            ctx->pc = 0x1C4F3Cu;
            return;
        }
    }
    ctx->pc = 0x1C4E9Cu;
    // 0x1c4e9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c4e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c4ea0: 0x2442e960  addiu       $v0, $v0, -0x16A0
    ctx->pc = 0x1c4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
    // 0x1c4ea4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4ea8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c4ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4eac: 0x800008  jr          $a0
    ctx->pc = 0x1C4EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4EB4u: goto label_1c4eb4;
            case 0x1C4EC4u: goto label_1c4ec4;
            case 0x1C4ED4u: goto label_1c4ed4;
            case 0x1C4EE4u: goto label_1c4ee4;
            case 0x1C4EF4u: goto label_1c4ef4;
            case 0x1C4F04u: goto label_1c4f04;
            case 0x1C4F14u: goto label_1c4f14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4EACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C4EB4u;
label_1c4eb4:
    // 0x1c4eb4: 0xc05fdd6  jal         func_17F758
    ctx->pc = 0x1C4EB4u;
    SET_GPR_U32(ctx, 31, 0x1C4EBCu);
    ctx->pc = 0x1C4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EB4u;
    // 0x1c4eb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F758u, 0x1C4EB4u, 0x1C4EBCu)) {
        return;
    }
    ctx->pc = 0x1C4EBCu;
label_1c4ebc:
    // 0x1c4ebc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C4EBCu;
    {
        const bool branch_taken_0x1c4ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EBCu;
        // 0x1c4ec0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ebc) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4EC4u;
label_1c4ec4:
    // 0x1c4ec4: 0xc05fde4  jal         func_17F790
    ctx->pc = 0x1C4EC4u;
    SET_GPR_U32(ctx, 31, 0x1C4ECCu);
    ctx->pc = 0x1C4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EC4u;
    // 0x1c4ec8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F790u, 0x1C4EC4u, 0x1C4ECCu)) {
        return;
    }
    ctx->pc = 0x1C4ECCu;
label_1c4ecc:
    // 0x1c4ecc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C4ECCu;
    {
        const bool branch_taken_0x1c4ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4ECCu;
        // 0x1c4ed0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ecc) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4ED4u;
label_1c4ed4:
    // 0x1c4ed4: 0xc05fde8  jal         func_17F7A0
    ctx->pc = 0x1C4ED4u;
    SET_GPR_U32(ctx, 31, 0x1C4EDCu);
    ctx->pc = 0x1C4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4ED4u;
    // 0x1c4ed8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7A0u, 0x1C4ED4u, 0x1C4EDCu)) {
        return;
    }
    ctx->pc = 0x1C4EDCu;
label_1c4edc:
    // 0x1c4edc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C4EDCu;
    {
        const bool branch_taken_0x1c4edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EDCu;
        // 0x1c4ee0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4edc) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4EE4u;
label_1c4ee4:
    // 0x1c4ee4: 0xc05fdec  jal         func_17F7B0
    ctx->pc = 0x1C4EE4u;
    SET_GPR_U32(ctx, 31, 0x1C4EECu);
    ctx->pc = 0x1C4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EE4u;
    // 0x1c4ee8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7B0u, 0x1C4EE4u, 0x1C4EECu)) {
        return;
    }
    ctx->pc = 0x1C4EECu;
label_1c4eec:
    // 0x1c4eec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C4EECu;
    {
        const bool branch_taken_0x1c4eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EECu;
        // 0x1c4ef0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4eec) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4EF4u;
label_1c4ef4:
    // 0x1c4ef4: 0xc05fdf0  jal         func_17F7C0
    ctx->pc = 0x1C4EF4u;
    SET_GPR_U32(ctx, 31, 0x1C4EFCu);
    ctx->pc = 0x1C4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EF4u;
    // 0x1c4ef8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7C0u, 0x1C4EF4u, 0x1C4EFCu)) {
        return;
    }
    ctx->pc = 0x1C4EFCu;
label_1c4efc:
    // 0x1c4efc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C4EFCu;
    {
        const bool branch_taken_0x1c4efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EFCu;
        // 0x1c4f00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4efc) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4F04u;
label_1c4f04:
    // 0x1c4f04: 0xc05fdf4  jal         func_17F7D0
    ctx->pc = 0x1C4F04u;
    SET_GPR_U32(ctx, 31, 0x1C4F0Cu);
    ctx->pc = 0x1C4F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F04u;
    // 0x1c4f08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7D0u, 0x1C4F04u, 0x1C4F0Cu)) {
        return;
    }
    ctx->pc = 0x1C4F0Cu;
label_1c4f0c:
    // 0x1c4f0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C4F0Cu;
    {
        const bool branch_taken_0x1c4f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F0Cu;
        // 0x1c4f10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f0c) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4F14u;
label_1c4f14:
    // 0x1c4f14: 0xc05fe08  jal         func_17F820
    ctx->pc = 0x1C4F14u;
    SET_GPR_U32(ctx, 31, 0x1C4F1Cu);
    ctx->pc = 0x1C4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F14u;
    // 0x1c4f18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F820u, 0x1C4F14u, 0x1C4F1Cu)) {
        return;
    }
    ctx->pc = 0x1C4F1Cu;
label_1c4f1c:
    // 0x1c4f1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4F1Cu;
    {
        const bool branch_taken_0x1c4f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F1Cu;
        // 0x1c4f20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f1c) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4F24u;
}
