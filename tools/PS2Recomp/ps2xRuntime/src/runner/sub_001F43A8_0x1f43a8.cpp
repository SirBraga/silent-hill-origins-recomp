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

// Function: sub_001F43A8
// Address: 0x1f43a8 - 0x1f4510
void sub_001F43A8_0x1f43a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F43A8_0x1f43a8");
#endif

    switch (ctx->pc) {
        case 0x1f43dcu: goto label_1f43dc;
        case 0x1f4400u: goto label_1f4400;
        case 0x1f445cu: goto label_1f445c;
        case 0x1f4474u: goto label_1f4474;
        case 0x1f4488u: goto label_1f4488;
        case 0x1f44c8u: goto label_1f44c8;
        case 0x1f44f0u: goto label_1f44f0;
        default: break;
    }

    ctx->pc = 0x1f43a8u;

    // 0x1f43a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f43a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f43ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f43acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f43b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f43b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f43b4: 0x24422808  addiu       $v0, $v0, 0x2808
    ctx->pc = 0x1f43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10248));
    // 0x1f43b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f43bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f43bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f43c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f43c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f43c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f43ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f43d0: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x1f43d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
    // 0x1f43d4: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x1F43D4u;
    SET_GPR_U32(ctx, 31, 0x1F43DCu);
    ctx->pc = 0x1F43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43D4u;
    // 0x1f43d8: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x1F43D4u, 0x1F43DCu)) {
        return;
    }
    ctx->pc = 0x1F43DCu;
label_1f43dc:
    // 0x1f43dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1f43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f43e0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F43E0u;
    {
        const bool branch_taken_0x1f43e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43E0u;
        // 0x1f43e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43e0) {
            ctx->pc = 0x1F4468u;
            goto label_1f4468;
        }
    }
    ctx->pc = 0x1F43E8u;
    // 0x1f43e8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1f43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1f43ec: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f43f0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F43F0u;
    {
        const bool branch_taken_0x1f43f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43F0u;
        // 0x1f43f4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43f0) {
            ctx->pc = 0x1F4418u;
            goto label_1f4418;
        }
    }
    ctx->pc = 0x1F43F8u;
    // 0x1f43f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f43fc: 0x0  nop
    ctx->pc = 0x1f43fcu;
    // NOP
label_1f4400:
    // 0x1f4400: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4400u;
    {
        const bool branch_taken_0x1f4400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4400) {
            ctx->pc = 0x1F441Cu;
            goto label_1f441c;
        }
    }
    ctx->pc = 0x1F4408u;
    // 0x1f4408: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1f4408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f440c: 0x0  nop
    ctx->pc = 0x1f440cu;
    // NOP
    // 0x1f4410: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F4410u;
    {
        const bool branch_taken_0x1f4410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4410) {
            ctx->pc = 0x1F4414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4410u;
            // 0x1f4414: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4400;
        }
    }
    ctx->pc = 0x1F4418u;
label_1f4418:
    // 0x1f4418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f441c:
    // 0x1f441c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F441Cu;
    {
        const bool branch_taken_0x1f441c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f441c) {
            ctx->pc = 0x1F4420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F441Cu;
            // 0x1f4420: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F446Cu;
            goto label_1f446c;
        }
    }
    ctx->pc = 0x1F4424u;
    // 0x1f4424: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4428: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4428u;
    {
        const bool branch_taken_0x1f4428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4428u;
        // 0x1f442c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4428) {
            ctx->pc = 0x1F4438u;
            goto label_1f4438;
        }
    }
    ctx->pc = 0x1F4430u;
    // 0x1f4430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4430u;
    {
        const bool branch_taken_0x1f4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4430u;
        // 0x1f4434: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4430) {
            ctx->pc = 0x1F443Cu;
            goto label_1f443c;
        }
    }
    ctx->pc = 0x1F4438u;
label_1f4438:
    // 0x1f4438: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f4438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f443c:
    // 0x1f443c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f4440: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4440u;
    {
        const bool branch_taken_0x1f4440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4440u;
        // 0x1f4444: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4440) {
            ctx->pc = 0x1F4450u;
            goto label_1f4450;
        }
    }
    ctx->pc = 0x1F4448u;
    // 0x1f4448: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4448u;
    {
        const bool branch_taken_0x1f4448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4448u;
        // 0x1f444c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4448) {
            ctx->pc = 0x1F4454u;
            goto label_1f4454;
        }
    }
    ctx->pc = 0x1F4450u;
label_1f4450:
    // 0x1f4450: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f4450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1f4454:
    // 0x1f4454: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F4454u;
    SET_GPR_U32(ctx, 31, 0x1F445Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F4454u, 0x1F445Cu)) {
        return;
    }
    ctx->pc = 0x1F445Cu;
label_1f445c:
    // 0x1f445c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4460: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f4460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f4464: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f4464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f4468:
    // 0x1f4468: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1f4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1f446c:
    // 0x1f446c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F446Cu;
    SET_GPR_U32(ctx, 31, 0x1F4474u);
    ctx->pc = 0x1F4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F446Cu;
    // 0x1f4470: 0x32710001  andi        $s1, $s3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F446Cu, 0x1F4474u)) {
        return;
    }
    ctx->pc = 0x1F4474u;
label_1f4474:
    // 0x1f4474: 0x26422820  addiu       $v0, $s2, 0x2820
    ctx->pc = 0x1f4474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10272));
    // 0x1f4478: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f4478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f447c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F447Cu;
    {
        const bool branch_taken_0x1f447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F447Cu;
        // 0x1f4480: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f447c) {
            ctx->pc = 0x1F44E0u;
            goto label_1f44e0;
        }
    }
    ctx->pc = 0x1F4484u;
    // 0x1f4484: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f4484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4488:
    // 0x1f4488: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F4488u;
    {
        const bool branch_taken_0x1f4488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4488) {
            ctx->pc = 0x1F448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4488u;
            // 0x1f448c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F44D8u;
            goto label_1f44d8;
        }
    }
    ctx->pc = 0x1F4490u;
    // 0x1f4490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4494: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4494u;
    {
        const bool branch_taken_0x1f4494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4494u;
        // 0x1f4498: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4494) {
            ctx->pc = 0x1F44A4u;
            goto label_1f44a4;
        }
    }
    ctx->pc = 0x1F449Cu;
    // 0x1f449c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F449Cu;
    {
        const bool branch_taken_0x1f449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F449Cu;
        // 0x1f44a0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f449c) {
            ctx->pc = 0x1F44A8u;
            goto label_1f44a8;
        }
    }
    ctx->pc = 0x1F44A4u;
label_1f44a4:
    // 0x1f44a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f44a8:
    // 0x1f44a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f44ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F44ACu;
    {
        const bool branch_taken_0x1f44ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44ACu;
        // 0x1f44b0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f44ac) {
            ctx->pc = 0x1F44BCu;
            goto label_1f44bc;
        }
    }
    ctx->pc = 0x1F44B4u;
    // 0x1f44b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F44B4u;
    {
        const bool branch_taken_0x1f44b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44B4u;
        // 0x1f44b8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f44b4) {
            ctx->pc = 0x1F44C0u;
            goto label_1f44c0;
        }
    }
    ctx->pc = 0x1F44BCu;
label_1f44bc:
    // 0x1f44bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1f44c0:
    // 0x1f44c0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F44C0u;
    SET_GPR_U32(ctx, 31, 0x1F44C8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F44C0u, 0x1F44C8u)) {
        return;
    }
    ctx->pc = 0x1F44C8u;
label_1f44c8:
    // 0x1f44c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f44cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f44d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f44d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f44d8:
    // 0x1f44d8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F44D8u;
    {
        const bool branch_taken_0x1f44d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f44d8) {
            ctx->pc = 0x1F44DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F44D8u;
            // 0x1f44dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4488;
        }
    }
    ctx->pc = 0x1F44E0u;
label_1f44e0:
    // 0x1f44e0: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F44E0u;
    {
        const bool branch_taken_0x1f44e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f44e0) {
            ctx->pc = 0x1F44E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F44E0u;
            // 0x1f44e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F44F4u;
            goto label_1f44f4;
        }
    }
    ctx->pc = 0x1F44E8u;
    // 0x1f44e8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F44E8u;
    SET_GPR_U32(ctx, 31, 0x1F44F0u);
    ctx->pc = 0x1F44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F44E8u;
    // 0x1f44ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F44E8u, 0x1F44F0u)) {
        return;
    }
    ctx->pc = 0x1F44F0u;
label_1f44f0:
    // 0x1f44f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f44f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f44f4:
    // 0x1f44f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f44f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f44f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f44f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f44fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f44fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4504: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4504u;
        // 0x1f4508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F450Cu;
    // 0x1f450c: 0x0  nop
    ctx->pc = 0x1f450cu;
    // NOP
    ctx->pc = 0x1f4510u;
}
