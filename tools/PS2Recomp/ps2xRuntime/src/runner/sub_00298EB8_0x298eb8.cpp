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

// Function: sub_00298EB8
// Address: 0x298eb8 - 0x299130
void sub_00298EB8_0x298eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298EB8_0x298eb8");
#endif

    switch (ctx->pc) {
        case 0x298ef8u: goto label_298ef8;
        case 0x298f14u: goto label_298f14;
        case 0x298f30u: goto label_298f30;
        case 0x298f70u: goto label_298f70;
        case 0x298fa8u: goto label_298fa8;
        case 0x298fc0u: goto label_298fc0;
        case 0x299000u: goto label_299000;
        case 0x299018u: goto label_299018;
        case 0x299030u: goto label_299030;
        case 0x299070u: goto label_299070;
        case 0x2990a8u: goto label_2990a8;
        case 0x2990c0u: goto label_2990c0;
        case 0x299100u: goto label_299100;
        case 0x299118u: goto label_299118;
        default: break;
    }

    ctx->pc = 0x298eb8u;

    // 0x298eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298ebc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ecc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298ed0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x298ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x298ed4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298ED4u;
    {
        const bool branch_taken_0x298ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298ED4u;
        // 0x298ed8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ed4) {
            ctx->pc = 0x298EE4u;
            goto label_298ee4;
        }
    }
    ctx->pc = 0x298EDCu;
    // 0x298edc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298EDCu;
    {
        const bool branch_taken_0x298edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EDCu;
        // 0x298ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298edc) {
            ctx->pc = 0x298EFCu;
            goto label_298efc;
        }
    }
    ctx->pc = 0x298EE4u;
label_298ee4:
    // 0x298ee4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x298ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x298ee8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298EE8u;
    {
        const bool branch_taken_0x298ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EE8u;
        // 0x298eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ee8) {
            ctx->pc = 0x298EFCu;
            goto label_298efc;
        }
    }
    ctx->pc = 0x298EF0u;
    // 0x298ef0: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298EF0u;
    SET_GPR_U32(ctx, 31, 0x298EF8u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298EF0u, 0x298EF8u)) {
        return;
    }
    ctx->pc = 0x298EF8u;
label_298ef8:
    // 0x298ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_298efc:
    // 0x298efc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298EFCu;
    {
        const bool branch_taken_0x298efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EFCu;
        // 0x298f00: 0x11283c  dsll32      $a1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298efc) {
            ctx->pc = 0x298F14u;
            goto label_298f14;
        }
    }
    ctx->pc = 0x298F04u;
    // 0x298f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f08: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x298f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x298f0c: 0xc0a629e  jal         func_298A78
    ctx->pc = 0x298F0Cu;
    SET_GPR_U32(ctx, 31, 0x298F14u);
    ctx->pc = 0x298F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F0Cu;
    // 0x298f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x298A78u, 0x298F0Cu, 0x298F14u)) {
        return;
    }
    ctx->pc = 0x298F14u;
label_298f14:
    // 0x298f14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298f1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298f24: 0x3e00008  jr          $ra
    ctx->pc = 0x298F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F24u;
        // 0x298f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298F2Cu;
    // 0x298f2c: 0x0  nop
    ctx->pc = 0x298f2cu;
    // NOP
label_298f30:
    // 0x298f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298f34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298f3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298f48: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x298f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x298f4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298F4Cu;
    {
        const bool branch_taken_0x298f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F4Cu;
        // 0x298f50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f4c) {
            ctx->pc = 0x298F5Cu;
            goto label_298f5c;
        }
    }
    ctx->pc = 0x298F54u;
    // 0x298f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298F54u;
    {
        const bool branch_taken_0x298f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F54u;
        // 0x298f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f54) {
            ctx->pc = 0x298F74u;
            goto label_298f74;
        }
    }
    ctx->pc = 0x298F5Cu;
label_298f5c:
    // 0x298f5c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x298f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x298f60: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298F60u;
    {
        const bool branch_taken_0x298f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F60u;
        // 0x298f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f60) {
            ctx->pc = 0x298F74u;
            goto label_298f74;
        }
    }
    ctx->pc = 0x298F68u;
    // 0x298f68: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298F68u;
    SET_GPR_U32(ctx, 31, 0x298F70u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298F68u, 0x298F70u)) {
        return;
    }
    ctx->pc = 0x298F70u;
label_298f70:
    // 0x298f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_298f74:
    // 0x298f74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x298F74u;
    {
        const bool branch_taken_0x298f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F74u;
        // 0x298f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f74) {
            ctx->pc = 0x298FA8u;
            goto label_298fa8;
        }
    }
    ctx->pc = 0x298F7Cu;
    // 0x298f7c: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x298F7Cu;
    {
        const bool branch_taken_0x298f7c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x298F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F7Cu;
        // 0x298f80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f7c) {
            ctx->pc = 0x298FA0u;
            goto label_298fa0;
        }
    }
    ctx->pc = 0x298F84u;
    // 0x298f84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298f88: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x298f88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x298f8c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x298f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x298f90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298F90u;
    {
        const bool branch_taken_0x298f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298f90) {
            ctx->pc = 0x298FA0u;
            goto label_298fa0;
        }
    }
    ctx->pc = 0x298F98u;
    // 0x298f98: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x298f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x298f9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x298f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298fa0:
    // 0x298fa0: 0xc0a629e  jal         func_298A78
    ctx->pc = 0x298FA0u;
    SET_GPR_U32(ctx, 31, 0x298FA8u);
    ctx->pc = 0x298FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FA0u;
    // 0x298fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x298A78u, 0x298FA0u, 0x298FA8u)) {
        return;
    }
    ctx->pc = 0x298FA8u;
label_298fa8:
    // 0x298fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298fb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x298FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FB8u;
        // 0x298fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298FC0u;
label_298fc0:
    // 0x298fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298fc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298fcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298fd8: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x298fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x298fdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298FDCu;
    {
        const bool branch_taken_0x298fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FDCu;
        // 0x298fe0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fdc) {
            ctx->pc = 0x298FECu;
            goto label_298fec;
        }
    }
    ctx->pc = 0x298FE4u;
    // 0x298fe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298FE4u;
    {
        const bool branch_taken_0x298fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FE4u;
        // 0x298fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fe4) {
            ctx->pc = 0x299004u;
            goto label_299004;
        }
    }
    ctx->pc = 0x298FECu;
label_298fec:
    // 0x298fec: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x298fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x298ff0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298FF0u;
    {
        const bool branch_taken_0x298ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FF0u;
        // 0x298ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ff0) {
            ctx->pc = 0x299004u;
            goto label_299004;
        }
    }
    ctx->pc = 0x298FF8u;
    // 0x298ff8: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298FF8u;
    SET_GPR_U32(ctx, 31, 0x299000u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298FF8u, 0x299000u)) {
        return;
    }
    ctx->pc = 0x299000u;
label_299000:
    // 0x299000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299004:
    // 0x299004: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299004u;
    {
        const bool branch_taken_0x299004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299004u;
        // 0x299008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299004) {
            ctx->pc = 0x299018u;
            goto label_299018;
        }
    }
    ctx->pc = 0x29900Cu;
    // 0x29900c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299010: 0xc0a629e  jal         func_298A78
    ctx->pc = 0x299010u;
    SET_GPR_U32(ctx, 31, 0x299018u);
    ctx->pc = 0x299014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299010u;
    // 0x299014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x298A78u, 0x299010u, 0x299018u)) {
        return;
    }
    ctx->pc = 0x299018u;
label_299018:
    // 0x299018: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29901c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299020: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299028: 0x3e00008  jr          $ra
    ctx->pc = 0x299028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299028u;
        // 0x29902c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299030u;
label_299030:
    // 0x299030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299034: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x299034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x299038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29903c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x299040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299044: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x299044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299048: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x299048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29904c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29904Cu;
    {
        const bool branch_taken_0x29904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29904Cu;
        // 0x299050: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29904c) {
            ctx->pc = 0x29905Cu;
            goto label_29905c;
        }
    }
    ctx->pc = 0x299054u;
    // 0x299054: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x299054u;
    {
        const bool branch_taken_0x299054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299054u;
        // 0x299058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299054) {
            ctx->pc = 0x299074u;
            goto label_299074;
        }
    }
    ctx->pc = 0x29905Cu;
label_29905c:
    // 0x29905c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299060: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299060u;
    {
        const bool branch_taken_0x299060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299060u;
        // 0x299064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299060) {
            ctx->pc = 0x299074u;
            goto label_299074;
        }
    }
    ctx->pc = 0x299068u;
    // 0x299068: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x299068u;
    SET_GPR_U32(ctx, 31, 0x299070u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x299068u, 0x299070u)) {
        return;
    }
    ctx->pc = 0x299070u;
label_299070:
    // 0x299070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299074:
    // 0x299074: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x299074u;
    {
        const bool branch_taken_0x299074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299074u;
        // 0x299078: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299074) {
            ctx->pc = 0x2990A8u;
            goto label_2990a8;
        }
    }
    ctx->pc = 0x29907Cu;
    // 0x29907c: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29907Cu;
    {
        const bool branch_taken_0x29907c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x299080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29907Cu;
        // 0x299080: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29907c) {
            ctx->pc = 0x2990A0u;
            goto label_2990a0;
        }
    }
    ctx->pc = 0x299084u;
    // 0x299084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299088: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x299088u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29908c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x29908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x299090: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299090u;
    {
        const bool branch_taken_0x299090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299090) {
            ctx->pc = 0x2990A0u;
            goto label_2990a0;
        }
    }
    ctx->pc = 0x299098u;
    // 0x299098: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x299098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x29909c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x29909cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2990a0:
    // 0x2990a0: 0xc0a629e  jal         func_298A78
    ctx->pc = 0x2990A0u;
    SET_GPR_U32(ctx, 31, 0x2990A8u);
    ctx->pc = 0x2990A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2990A0u;
    // 0x2990a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x298A78u, 0x2990A0u, 0x2990A8u)) {
        return;
    }
    ctx->pc = 0x2990A8u;
label_2990a8:
    // 0x2990a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2990a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2990acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2990b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2990b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2990b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2990b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2990b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2990B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2990BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990B8u;
        // 0x2990bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2990B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2990C0u;
label_2990c0:
    // 0x2990c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2990c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2990c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2990c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2990c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2990c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2990cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2990ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2990d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2990d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2990d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2990d8: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x2990d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x2990dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2990DCu;
    {
        const bool branch_taken_0x2990dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990DCu;
        // 0x2990e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990dc) {
            ctx->pc = 0x2990ECu;
            goto label_2990ec;
        }
    }
    ctx->pc = 0x2990E4u;
    // 0x2990e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2990E4u;
    {
        const bool branch_taken_0x2990e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990E4u;
        // 0x2990e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990e4) {
            ctx->pc = 0x299104u;
            goto label_299104;
        }
    }
    ctx->pc = 0x2990ECu;
label_2990ec:
    // 0x2990ec: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2990ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2990f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2990F0u;
    {
        const bool branch_taken_0x2990f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990F0u;
        // 0x2990f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990f0) {
            ctx->pc = 0x299104u;
            goto label_299104;
        }
    }
    ctx->pc = 0x2990F8u;
    // 0x2990f8: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x2990F8u;
    SET_GPR_U32(ctx, 31, 0x299100u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x2990F8u, 0x299100u)) {
        return;
    }
    ctx->pc = 0x299100u;
label_299100:
    // 0x299100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299104:
    // 0x299104: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299104u;
    {
        const bool branch_taken_0x299104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299104u;
        // 0x299108: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299104) {
            ctx->pc = 0x299118u;
            goto label_299118;
        }
    }
    ctx->pc = 0x29910Cu;
    // 0x29910c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299110: 0xc0a629e  jal         func_298A78
    ctx->pc = 0x299110u;
    SET_GPR_U32(ctx, 31, 0x299118u);
    ctx->pc = 0x299114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299110u;
    // 0x299114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x298A78u, 0x299110u, 0x299118u)) {
        return;
    }
    ctx->pc = 0x299118u;
label_299118:
    // 0x299118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29911c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299120: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299128: 0x3e00008  jr          $ra
    ctx->pc = 0x299128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299128u;
        // 0x29912c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299130u;
}
