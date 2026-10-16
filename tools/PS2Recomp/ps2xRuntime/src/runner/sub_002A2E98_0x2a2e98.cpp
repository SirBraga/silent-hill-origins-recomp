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

// Function: sub_002A2E98
// Address: 0x2a2e98 - 0x2a2fb8
void sub_002A2E98_0x2a2e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2E98_0x2a2e98");
#endif

    switch (ctx->pc) {
        case 0x2a2e98u: goto label_2a2e98;
        case 0x2a2e9cu: goto label_2a2e9c;
        case 0x2a2ea0u: goto label_2a2ea0;
        case 0x2a2ea4u: goto label_2a2ea4;
        case 0x2a2ea8u: goto label_2a2ea8;
        case 0x2a2eacu: goto label_2a2eac;
        case 0x2a2eb0u: goto label_2a2eb0;
        case 0x2a2eb4u: goto label_2a2eb4;
        case 0x2a2eb8u: goto label_2a2eb8;
        case 0x2a2ebcu: goto label_2a2ebc;
        case 0x2a2ec0u: goto label_2a2ec0;
        case 0x2a2ec4u: goto label_2a2ec4;
        case 0x2a2ec8u: goto label_2a2ec8;
        case 0x2a2eccu: goto label_2a2ecc;
        case 0x2a2ed0u: goto label_2a2ed0;
        case 0x2a2ed4u: goto label_2a2ed4;
        case 0x2a2ed8u: goto label_2a2ed8;
        case 0x2a2edcu: goto label_2a2edc;
        case 0x2a2ee0u: goto label_2a2ee0;
        case 0x2a2ee4u: goto label_2a2ee4;
        case 0x2a2ee8u: goto label_2a2ee8;
        case 0x2a2eecu: goto label_2a2eec;
        case 0x2a2ef0u: goto label_2a2ef0;
        case 0x2a2ef4u: goto label_2a2ef4;
        case 0x2a2ef8u: goto label_2a2ef8;
        case 0x2a2efcu: goto label_2a2efc;
        case 0x2a2f00u: goto label_2a2f00;
        case 0x2a2f04u: goto label_2a2f04;
        case 0x2a2f08u: goto label_2a2f08;
        case 0x2a2f0cu: goto label_2a2f0c;
        case 0x2a2f10u: goto label_2a2f10;
        case 0x2a2f14u: goto label_2a2f14;
        case 0x2a2f18u: goto label_2a2f18;
        case 0x2a2f1cu: goto label_2a2f1c;
        case 0x2a2f20u: goto label_2a2f20;
        case 0x2a2f24u: goto label_2a2f24;
        case 0x2a2f28u: goto label_2a2f28;
        case 0x2a2f2cu: goto label_2a2f2c;
        case 0x2a2f30u: goto label_2a2f30;
        case 0x2a2f34u: goto label_2a2f34;
        case 0x2a2f38u: goto label_2a2f38;
        case 0x2a2f3cu: goto label_2a2f3c;
        case 0x2a2f40u: goto label_2a2f40;
        case 0x2a2f44u: goto label_2a2f44;
        case 0x2a2f48u: goto label_2a2f48;
        case 0x2a2f4cu: goto label_2a2f4c;
        case 0x2a2f50u: goto label_2a2f50;
        case 0x2a2f54u: goto label_2a2f54;
        case 0x2a2f58u: goto label_2a2f58;
        case 0x2a2f5cu: goto label_2a2f5c;
        case 0x2a2f60u: goto label_2a2f60;
        case 0x2a2f64u: goto label_2a2f64;
        case 0x2a2f68u: goto label_2a2f68;
        case 0x2a2f6cu: goto label_2a2f6c;
        case 0x2a2f70u: goto label_2a2f70;
        case 0x2a2f74u: goto label_2a2f74;
        case 0x2a2f78u: goto label_2a2f78;
        case 0x2a2f7cu: goto label_2a2f7c;
        case 0x2a2f80u: goto label_2a2f80;
        case 0x2a2f84u: goto label_2a2f84;
        case 0x2a2f88u: goto label_2a2f88;
        case 0x2a2f8cu: goto label_2a2f8c;
        case 0x2a2f90u: goto label_2a2f90;
        case 0x2a2f94u: goto label_2a2f94;
        case 0x2a2f98u: goto label_2a2f98;
        case 0x2a2f9cu: goto label_2a2f9c;
        case 0x2a2fa0u: goto label_2a2fa0;
        case 0x2a2fa4u: goto label_2a2fa4;
        case 0x2a2fa8u: goto label_2a2fa8;
        case 0x2a2facu: goto label_2a2fac;
        case 0x2a2fb0u: goto label_2a2fb0;
        case 0x2a2fb4u: goto label_2a2fb4;
        default: break;
    }

    ctx->pc = 0x2a2e98u;

label_2a2e98:
    // 0x2a2e98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a2e9c:
    // 0x2a2e9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a2e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2a2ea0:
    // 0x2a2ea0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a2ea4:
    // 0x2a2ea4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a2ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ea8:
    // 0x2a2ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a2eac:
    // 0x2a2eac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a2eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a2eb0:
    // 0x2a2eb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a2eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a2eb4:
    // 0x2a2eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2eb8:
    // 0x2a2eb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a2eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a2ebc:
    // 0x2a2ebc: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_2a2ec0:
    if (ctx->pc == 0x2A2EC0u) {
        ctx->pc = 0x2A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EBCu;
        // 0x2a2ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EC4u;
        goto label_2a2ec4;
    }
    ctx->pc = 0x2A2EBCu;
    {
        const bool branch_taken_0x2a2ebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EBCu;
        // 0x2a2ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ebc) {
            ctx->pc = 0x2A2F98u;
            goto label_2a2f98;
        }
    }
    ctx->pc = 0x2A2EC4u;
label_2a2ec4:
    // 0x2a2ec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a2ec8:
    // 0x2a2ec8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2a2ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_2a2ecc:
    // 0x2a2ecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a2ed0:
    if (ctx->pc == 0x2A2ED0u) {
        ctx->pc = 0x2A2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ECCu;
        // 0x2a2ed0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2ED4u;
        goto label_2a2ed4;
    }
    ctx->pc = 0x2A2ECCu;
    {
        const bool branch_taken_0x2a2ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ECCu;
        // 0x2a2ed0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ecc) {
            ctx->pc = 0x2A2EDCu;
            goto label_2a2edc;
        }
    }
    ctx->pc = 0x2A2ED4u;
label_2a2ed4:
    // 0x2a2ed4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a2ed8:
    if (ctx->pc == 0x2A2ED8u) {
        ctx->pc = 0x2A2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ED4u;
        // 0x2a2ed8: 0xfe020040  sd          $v0, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EDCu;
        goto label_2a2edc;
    }
    ctx->pc = 0x2A2ED4u;
    {
        const bool branch_taken_0x2a2ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ED4u;
        // 0x2a2ed8: 0xfe020040  sd          $v0, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ed4) {
            ctx->pc = 0x2A2F14u;
            goto label_2a2f14;
        }
    }
    ctx->pc = 0x2A2EDCu;
label_2a2edc:
    // 0x2a2edc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2a2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a2ee0:
    // 0x2a2ee0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a2ee4:
    // 0x2a2ee4: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_2a2ee8:
    if (ctx->pc == 0x2A2EE8u) {
        ctx->pc = 0x2A2EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EE4u;
        // 0x2a2ee8: 0x442823  subu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EECu;
        goto label_2a2eec;
    }
    ctx->pc = 0x2A2EE4u;
    {
        const bool branch_taken_0x2a2ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EE4u;
        // 0x2a2ee8: 0x442823  subu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ee4) {
            ctx->pc = 0x2A2F14u;
            goto label_2a2f14;
        }
    }
    ctx->pc = 0x2A2EECu;
label_2a2eec:
    // 0x2a2eec: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a2ef0:
    // 0x2a2ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ef4:
    // 0x2a2ef4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2a2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2a2ef8:
    // 0x2a2ef8: 0x40f809  jalr        $v0
label_2a2efc:
    if (ctx->pc == 0x2A2EFCu) {
        ctx->pc = 0x2A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EF8u;
        // 0x2a2efc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F00u;
        goto label_2a2f00;
    }
    ctx->pc = 0x2A2EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2F00u);
        ctx->pc = 0x2A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EF8u;
        // 0x2a2efc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2EF8u, 0x2A2F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2F00u;
label_2a2f00:
    // 0x2a2f00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a2f00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f04:
    // 0x2a2f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2f08:
    // 0x2a2f08: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_2a2f0c:
    if (ctx->pc == 0x2A2F0Cu) {
        ctx->pc = 0x2A2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F08u;
        // 0x2a2f0c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F10u;
        goto label_2a2f10;
    }
    ctx->pc = 0x2A2F08u;
    {
        const bool branch_taken_0x2a2f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F08u;
        // 0x2a2f0c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f08) {
            ctx->pc = 0x2A2F9Cu;
            goto label_2a2f9c;
        }
    }
    ctx->pc = 0x2A2F10u;
label_2a2f10:
    // 0x2a2f10: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x2a2f10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
label_2a2f14:
    // 0x2a2f14: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a2f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a2f18:
    // 0x2a2f18: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x2a2f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_2a2f1c:
    // 0x2a2f1c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a2f1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_2a2f20:
    // 0x2a2f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f24:
    // 0x2a2f24: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2a2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2a2f28:
    // 0x2a2f28: 0x40f809  jalr        $v0
label_2a2f2c:
    if (ctx->pc == 0x2A2F2Cu) {
        ctx->pc = 0x2A2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F28u;
        // 0x2a2f2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F30u;
        goto label_2a2f30;
    }
    ctx->pc = 0x2A2F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2F30u);
        ctx->pc = 0x2A2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F28u;
        // 0x2a2f2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2F28u, 0x2A2F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2F30u;
label_2a2f30:
    // 0x2a2f30: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x2a2f30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_2a2f34:
    // 0x2a2f34: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x2a2f34u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_2a2f38:
    // 0x2a2f38: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x2a2f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_2a2f3c:
    // 0x2a2f3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a2f40:
    if (ctx->pc == 0x2A2F40u) {
        ctx->pc = 0x2A2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F3Cu;
        // 0x2a2f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F44u;
        goto label_2a2f44;
    }
    ctx->pc = 0x2A2F3Cu;
    {
        const bool branch_taken_0x2a2f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F3Cu;
        // 0x2a2f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f3c) {
            ctx->pc = 0x2A2F5Cu;
            goto label_2a2f5c;
        }
    }
    ctx->pc = 0x2A2F44u;
label_2a2f44:
    // 0x2a2f44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a2f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f48:
    // 0x2a2f48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f4c:
    // 0x2a2f4c: 0xc0a748a  jal         func_29D228
label_2a2f50:
    if (ctx->pc == 0x2A2F50u) {
        ctx->pc = 0x2A2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F4Cu;
        // 0x2a2f50: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F54u;
        goto label_2a2f54;
    }
    ctx->pc = 0x2A2F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F54u);
    ctx->pc = 0x2A2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F4Cu;
    // 0x2a2f50: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D228u, 0x2A2F4Cu, 0x2A2F54u)) {
        return;
    }
    ctx->pc = 0x2A2F54u;
label_2a2f54:
    // 0x2a2f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a2f58:
    // 0x2a2f58: 0xa6020048  sh          $v0, 0x48($s0)
    ctx->pc = 0x2a2f58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 2));
label_2a2f5c:
    // 0x2a2f5c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a2f60:
    // 0x2a2f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a2f64:
    // 0x2a2f64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f68:
    // 0x2a2f68: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2a2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2a2f6c:
    // 0x2a2f6c: 0x30630202  andi        $v1, $v1, 0x202
    ctx->pc = 0x2a2f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
label_2a2f70:
    // 0x2a2f70: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2a2f74:
    // 0x2a2f74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2a2f78:
    // 0x2a2f78: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2a2f7c:
    // 0x2a2f7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2a2f80:
    if (ctx->pc == 0x2A2F80u) {
        ctx->pc = 0x2A2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F7Cu;
        // 0x2a2f80: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F84u;
        goto label_2a2f84;
    }
    ctx->pc = 0x2A2F7Cu;
    {
        const bool branch_taken_0x2a2f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F7Cu;
        // 0x2a2f80: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f7c) {
            ctx->pc = 0x2A2F88u;
            goto label_2a2f88;
        }
    }
    ctx->pc = 0x2A2F84u;
label_2a2f84:
    // 0x2a2f84: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2a2f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a2f88:
    // 0x2a2f88: 0x2511826  xor         $v1, $s2, $s1
    ctx->pc = 0x2a2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
label_2a2f8c:
    // 0x2a2f8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2f90:
    // 0x2a2f90: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2a2f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_2a2f94:
    // 0x2a2f94: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2a2f94u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_2a2f98:
    // 0x2a2f98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a2f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a2f9c:
    // 0x2a2f9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a2f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a2fa0:
    // 0x2a2fa0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2fa4:
    // 0x2a2fa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a2fa8:
    // 0x2a2fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2fac:
    // 0x2a2fac: 0x3e00008  jr          $ra
label_2a2fb0:
    if (ctx->pc == 0x2A2FB0u) {
        ctx->pc = 0x2A2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FACu;
        // 0x2a2fb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FB4u;
        goto label_2a2fb4;
    }
    ctx->pc = 0x2A2FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FACu;
        // 0x2a2fb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2FB4u;
label_2a2fb4:
    // 0x2a2fb4: 0x0  nop
    ctx->pc = 0x2a2fb4u;
    // NOP
    ctx->pc = 0x2a2fb8u;
}
