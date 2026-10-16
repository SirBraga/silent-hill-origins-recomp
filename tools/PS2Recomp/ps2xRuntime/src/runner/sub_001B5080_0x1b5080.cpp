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

// Function: sub_001B5080
// Address: 0x1b5080 - 0x1b5190
void sub_001B5080_0x1b5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5080_0x1b5080");
#endif

    switch (ctx->pc) {
        case 0x1b50a8u: goto label_1b50a8;
        case 0x1b50ccu: goto label_1b50cc;
        case 0x1b50dcu: goto label_1b50dc;
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b5108u: goto label_1b5108;
        case 0x1b5120u: goto label_1b5120;
        case 0x1b5130u: goto label_1b5130;
        case 0x1b5144u: goto label_1b5144;
        case 0x1b5158u: goto label_1b5158;
        default: break;
    }

    ctx->pc = 0x1b5080u;

    // 0x1b5080: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b5080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b5084: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1b5084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1b5088: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1b5088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1b508c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b508cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5090: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1b5090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1b5094: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1b5094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1b5098: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1b5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1b509c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b50a0: 0xc06e0cc  jal         func_1B8330
    ctx->pc = 0x1B50A0u;
    SET_GPR_U32(ctx, 31, 0x1B50A8u);
    ctx->pc = 0x1B50A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50A0u;
    // 0x1b50a4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B8330u, 0x1B50A0u, 0x1B50A8u)) {
        return;
    }
    ctx->pc = 0x1B50A8u;
label_1b50a8:
    // 0x1b50a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b50ac: 0xae400378  sw          $zero, 0x378($s2)
    ctx->pc = 0x1b50acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 888), GPR_U32(ctx, 0));
    // 0x1b50b0: 0x2463c4f8  addiu       $v1, $v1, -0x3B08
    ctx->pc = 0x1b50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952184));
    // 0x1b50b4: 0xae40037c  sw          $zero, 0x37C($s2)
    ctx->pc = 0x1b50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 892), GPR_U32(ctx, 0));
    // 0x1b50b8: 0xae430258  sw          $v1, 0x258($s2)
    ctx->pc = 0x1b50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 3));
    // 0x1b50bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b50bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b50c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50c4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B50C4u;
    SET_GPR_U32(ctx, 31, 0x1B50CCu);
    ctx->pc = 0x1B50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50C4u;
    // 0x1b50c8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B50C4u, 0x1B50CCu)) {
        return;
    }
    ctx->pc = 0x1B50CCu;
label_1b50cc:
    // 0x1b50cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b50ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b50d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50d4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B50D4u;
    SET_GPR_U32(ctx, 31, 0x1B50DCu);
    ctx->pc = 0x1B50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50D4u;
    // 0x1b50d8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B50D4u, 0x1B50DCu)) {
        return;
    }
    ctx->pc = 0x1B50DCu;
label_1b50dc:
    // 0x1b50dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b50dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b50e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b50e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50e4: 0x24a5c4e8  addiu       $a1, $a1, -0x3B18
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952168));
    // 0x1b50e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b50e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50ec: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B50ECu;
    SET_GPR_U32(ctx, 31, 0x1B50F4u);
    ctx->pc = 0x1B50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50ECu;
    // 0x1b50f0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B50ECu, 0x1B50F4u)) {
        return;
    }
    ctx->pc = 0x1B50F4u;
label_1b50f4:
    // 0x1b50f4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b50f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B50F8u;
    {
        const bool branch_taken_0x1b50f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50F8u;
        // 0x1b50fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50f8) {
            ctx->pc = 0x1B510Cu;
            goto label_1b510c;
        }
    }
    ctx->pc = 0x1B5100u;
    // 0x1b5100: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B5100u;
    SET_GPR_U32(ctx, 31, 0x1B5108u);
    ctx->pc = 0x1B5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5100u;
    // 0x1b5104: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B5100u, 0x1B5108u)) {
        return;
    }
    ctx->pc = 0x1B5108u;
label_1b5108:
    // 0x1b5108: 0xae420378  sw          $v0, 0x378($s2)
    ctx->pc = 0x1b5108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 888), GPR_U32(ctx, 2));
label_1b510c:
    // 0x1b510c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b510cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5114: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b5114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b5118: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B5118u;
    SET_GPR_U32(ctx, 31, 0x1B5120u);
    ctx->pc = 0x1B511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5118u;
    // 0x1b511c: 0x26500340  addiu       $s0, $s2, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B5118u, 0x1B5120u)) {
        return;
    }
    ctx->pc = 0x1B5120u;
label_1b5120:
    // 0x1b5120: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b5124: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b5124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b5128: 0x24519248  addiu       $s1, $v0, -0x6DB8
    ctx->pc = 0x1b5128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939208));
    // 0x1b512c: 0x0  nop
    ctx->pc = 0x1b512cu;
    // NOP
label_1b5130:
    // 0x1b5130: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b5130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b5134: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b5134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5138: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b513c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B513Cu;
    SET_GPR_U32(ctx, 31, 0x1B5144u);
    ctx->pc = 0x1B5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B513Cu;
    // 0x1b5140: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B513Cu, 0x1B5144u)) {
        return;
    }
    ctx->pc = 0x1B5144u;
label_1b5144:
    // 0x1b5144: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b5144u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5148: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5148u;
    {
        const bool branch_taken_0x1b5148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5148u;
        // 0x1b514c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5148) {
            ctx->pc = 0x1B515Cu;
            goto label_1b515c;
        }
    }
    ctx->pc = 0x1B5150u;
    // 0x1b5150: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B5150u;
    SET_GPR_U32(ctx, 31, 0x1B5158u);
    ctx->pc = 0x1B5154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5150u;
    // 0x1b5154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B5150u, 0x1B5158u)) {
        return;
    }
    ctx->pc = 0x1B5158u;
label_1b5158:
    // 0x1b5158: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b5158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b515c:
    // 0x1b515c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b515cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b5160: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1b5164: 0x661fff2  bgez        $s3, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B5164u;
    {
        const bool branch_taken_0x1b5164 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1B5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5164u;
        // 0x1b5168: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5164) {
            ctx->pc = 0x1B5130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5130;
        }
    }
    ctx->pc = 0x1B516Cu;
    // 0x1b516c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b516cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5170: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1b5170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b5174: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1b5174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b5178: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1b5178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b517c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1b517cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5180: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1b5180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b5184: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b5184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5188: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5188u;
        // 0x1b518c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5190u;
}
