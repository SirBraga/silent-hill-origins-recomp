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

// Function: sub_001F4178
// Address: 0x1f4178 - 0x1f4210
void sub_001F4178_0x1f4178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4178_0x1f4178");
#endif

    switch (ctx->pc) {
        case 0x1f4178u: goto label_1f4178;
        case 0x1f417cu: goto label_1f417c;
        case 0x1f4180u: goto label_1f4180;
        case 0x1f4184u: goto label_1f4184;
        case 0x1f4188u: goto label_1f4188;
        case 0x1f418cu: goto label_1f418c;
        case 0x1f4190u: goto label_1f4190;
        case 0x1f4194u: goto label_1f4194;
        case 0x1f4198u: goto label_1f4198;
        case 0x1f419cu: goto label_1f419c;
        case 0x1f41a0u: goto label_1f41a0;
        case 0x1f41a4u: goto label_1f41a4;
        case 0x1f41a8u: goto label_1f41a8;
        case 0x1f41acu: goto label_1f41ac;
        case 0x1f41b0u: goto label_1f41b0;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41b8u: goto label_1f41b8;
        case 0x1f41bcu: goto label_1f41bc;
        case 0x1f41c0u: goto label_1f41c0;
        case 0x1f41c4u: goto label_1f41c4;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41ccu: goto label_1f41cc;
        case 0x1f41d0u: goto label_1f41d0;
        case 0x1f41d4u: goto label_1f41d4;
        case 0x1f41d8u: goto label_1f41d8;
        case 0x1f41dcu: goto label_1f41dc;
        case 0x1f41e0u: goto label_1f41e0;
        case 0x1f41e4u: goto label_1f41e4;
        case 0x1f41e8u: goto label_1f41e8;
        case 0x1f41ecu: goto label_1f41ec;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41f4u: goto label_1f41f4;
        case 0x1f41f8u: goto label_1f41f8;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f4200u: goto label_1f4200;
        case 0x1f4204u: goto label_1f4204;
        case 0x1f4208u: goto label_1f4208;
        case 0x1f420cu: goto label_1f420c;
        default: break;
    }

    ctx->pc = 0x1f4178u;

label_1f4178:
    // 0x1f4178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f417c:
    // 0x1f417c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4180:
    // 0x1f4180: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f4184:
    // 0x1f4184: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x1f4184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
label_1f4188:
    // 0x1f4188: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f4188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f418c:
    // 0x1f418c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f418cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4190:
    // 0x1f4190: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f4190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f4194:
    // 0x1f4194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f4194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4198:
    // 0x1f4198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f419c:
    // 0x1f419c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1f419cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1f41a0:
    // 0x1f41a0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1f41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_1f41a4:
    // 0x1f41a4: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1f41a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
label_1f41a8:
    // 0x1f41a8: 0xc07fb0c  jal         func_1FEC30
label_1f41ac:
    if (ctx->pc == 0x1F41ACu) {
        ctx->pc = 0x1F41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41A8u;
        // 0x1f41ac: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41B0u;
        goto label_1f41b0;
    }
    ctx->pc = 0x1F41A8u;
    SET_GPR_U32(ctx, 31, 0x1F41B0u);
    ctx->pc = 0x1F41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41A8u;
    // 0x1f41ac: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1F41A8u, 0x1F41B0u)) {
        return;
    }
    ctx->pc = 0x1F41B0u;
label_1f41b0:
    // 0x1f41b0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f41b4:
    // 0x1f41b4: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1f41b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f41b8:
    // 0x1f41b8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_1f41bc:
    if (ctx->pc == 0x1F41BCu) {
        ctx->pc = 0x1F41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41B8u;
        // 0x1f41bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41C0u;
        goto label_1f41c0;
    }
    ctx->pc = 0x1F41B8u;
    {
        const bool branch_taken_0x1f41b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41B8u;
        // 0x1f41bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41b8) {
            ctx->pc = 0x1F41ECu;
            goto label_1f41ec;
        }
    }
    ctx->pc = 0x1F41C0u;
label_1f41c0:
    // 0x1f41c0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1f41c4:
    if (ctx->pc == 0x1F41C4u) {
        ctx->pc = 0x1F41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41C0u;
        // 0x1f41c4: 0x8cd00024  lw          $s0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41C8u;
        goto label_1f41c8;
    }
    ctx->pc = 0x1F41C0u;
    {
        const bool branch_taken_0x1f41c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41C0u;
        // 0x1f41c4: 0x8cd00024  lw          $s0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41c0) {
            ctx->pc = 0x1F41E0u;
            goto label_1f41e0;
        }
    }
    ctx->pc = 0x1F41C8u;
label_1f41c8:
    // 0x1f41c8: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1f41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1f41cc:
    // 0x1f41cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f41d0:
    // 0x1f41d0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f41d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f41d4:
    // 0x1f41d4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f41d8:
    // 0x1f41d8: 0x60f809  jalr        $v1
label_1f41dc:
    if (ctx->pc == 0x1F41DCu) {
        ctx->pc = 0x1F41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41D8u;
        // 0x1f41dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41E0u;
        goto label_1f41e0;
    }
    ctx->pc = 0x1F41D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F41E0u);
        ctx->pc = 0x1F41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41D8u;
        // 0x1f41dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F41D8u, 0x1F41E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F41E0u;
label_1f41e0:
    // 0x1f41e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f41e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f41e4:
    // 0x1f41e4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_1f41e8:
    if (ctx->pc == 0x1F41E8u) {
        ctx->pc = 0x1F41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41E4u;
        // 0x1f41e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41ECu;
        goto label_1f41ec;
    }
    ctx->pc = 0x1F41E4u;
    {
        const bool branch_taken_0x1f41e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41E4u;
        // 0x1f41e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41e4) {
            ctx->pc = 0x1F41C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f41c0;
        }
    }
    ctx->pc = 0x1F41ECu;
label_1f41ec:
    // 0x1f41ec: 0xc07fc62  jal         func_1FF188
label_1f41f0:
    if (ctx->pc == 0x1F41F0u) {
        ctx->pc = 0x1F41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41ECu;
        // 0x1f41f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41F4u;
        goto label_1f41f4;
    }
    ctx->pc = 0x1F41ECu;
    SET_GPR_U32(ctx, 31, 0x1F41F4u);
    ctx->pc = 0x1F41F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41ECu;
    // 0x1f41f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x1F41ECu, 0x1F41F4u)) {
        return;
    }
    ctx->pc = 0x1F41F4u;
label_1f41f4:
    // 0x1f41f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f41f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f41f8:
    // 0x1f41f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f41f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f41fc:
    // 0x1f41fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f41fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4200:
    // 0x1f4200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4204:
    // 0x1f4204: 0x3e00008  jr          $ra
label_1f4208:
    if (ctx->pc == 0x1F4208u) {
        ctx->pc = 0x1F4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4204u;
        // 0x1f4208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F420Cu;
        goto label_1f420c;
    }
    ctx->pc = 0x1F4204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4204u;
        // 0x1f4208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F420Cu;
label_1f420c:
    // 0x1f420c: 0x0  nop
    ctx->pc = 0x1f420cu;
    // NOP
    ctx->pc = 0x1f4210u;
}
