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

// Function: sub_001C8058
// Address: 0x1c8058 - 0x1c8168
void sub_001C8058_0x1c8058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8058_0x1c8058");
#endif

    switch (ctx->pc) {
        case 0x1c8074u: goto label_1c8074;
        case 0x1c80c0u: goto label_1c80c0;
        case 0x1c80c8u: goto label_1c80c8;
        case 0x1c80dcu: goto label_1c80dc;
        case 0x1c80f4u: goto label_1c80f4;
        case 0x1c8108u: goto label_1c8108;
        case 0x1c811cu: goto label_1c811c;
        case 0x1c8134u: goto label_1c8134;
        case 0x1c8148u: goto label_1c8148;
        default: break;
    }

    ctx->pc = 0x1c8058u;

    // 0x1c8058: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c8058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c805c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c8060: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c8060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c8064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8068: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c8068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c806c: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C806Cu;
    SET_GPR_U32(ctx, 31, 0x1C8074u);
    ctx->pc = 0x1C8070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C806Cu;
    // 0x1c8070: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C806Cu, 0x1C8074u)) {
        return;
    }
    ctx->pc = 0x1C8074u;
label_1c8074:
    // 0x1c8074: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c8074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c8078: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c8078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1c807c: 0x2463f5c0  addiu       $v1, $v1, -0xA40
    ctx->pc = 0x1c807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964672));
    // 0x1c8080: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1c8080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1c8084: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c8084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c8088: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c8088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c808c: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c808cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1c8090: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c8090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c8094: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1c8094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1c8098: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c8098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1c809c: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c809cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1c80a0: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1c80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1c80a4: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1c80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1c80a8: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1c80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1c80ac: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1c80acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1c80b0: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1c80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1c80b4: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1c80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1c80b8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1C80B8u;
    SET_GPR_U32(ctx, 31, 0x1C80C0u);
    ctx->pc = 0x1C80BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80B8u;
    // 0x1c80bc: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1C80B8u, 0x1C80C0u)) {
        return;
    }
    ctx->pc = 0x1C80C0u;
label_1c80c0:
    // 0x1c80c0: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1C80C0u;
    SET_GPR_U32(ctx, 31, 0x1C80C8u);
    ctx->pc = 0x1C80C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80C0u;
    // 0x1c80c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1C80C0u, 0x1C80C8u)) {
        return;
    }
    ctx->pc = 0x1C80C8u;
label_1c80c8:
    // 0x1c80c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c80c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c80ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80d0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c80d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c80d4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C80D4u;
    SET_GPR_U32(ctx, 31, 0x1C80DCu);
    ctx->pc = 0x1C80D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80D4u;
    // 0x1c80d8: 0xae020260  sw          $v0, 0x260($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C80D4u, 0x1C80DCu)) {
        return;
    }
    ctx->pc = 0x1C80DCu;
label_1c80dc:
    // 0x1c80dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c80dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c80e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c80e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80e4: 0x24a5f588  addiu       $a1, $a1, -0xA78
    ctx->pc = 0x1c80e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964616));
    // 0x1c80e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c80e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80ec: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C80ECu;
    SET_GPR_U32(ctx, 31, 0x1C80F4u);
    ctx->pc = 0x1C80F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80ECu;
    // 0x1c80f0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C80ECu, 0x1C80F4u)) {
        return;
    }
    ctx->pc = 0x1C80F4u;
label_1c80f4:
    // 0x1c80f4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c80f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c80f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C80F8u;
    {
        const bool branch_taken_0x1c80f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80F8u;
        // 0x1c80fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80f8) {
            ctx->pc = 0x1C810Cu;
            goto label_1c810c;
        }
    }
    ctx->pc = 0x1C8100u;
    // 0x1c8100: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C8100u;
    SET_GPR_U32(ctx, 31, 0x1C8108u);
    ctx->pc = 0x1C8104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8100u;
    // 0x1c8104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C8100u, 0x1C8108u)) {
        return;
    }
    ctx->pc = 0x1C8108u;
label_1c8108:
    // 0x1c8108: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x1c8108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
label_1c810c:
    // 0x1c810c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c810cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8114: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C8114u;
    SET_GPR_U32(ctx, 31, 0x1C811Cu);
    ctx->pc = 0x1C8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8114u;
    // 0x1c8118: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C8114u, 0x1C811Cu)) {
        return;
    }
    ctx->pc = 0x1C811Cu;
label_1c811c:
    // 0x1c811c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c811cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c8120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8124: 0x24a5f598  addiu       $a1, $a1, -0xA68
    ctx->pc = 0x1c8124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964632));
    // 0x1c8128: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c8128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c812c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C812Cu;
    SET_GPR_U32(ctx, 31, 0x1C8134u);
    ctx->pc = 0x1C8130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C812Cu;
    // 0x1c8130: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C812Cu, 0x1C8134u)) {
        return;
    }
    ctx->pc = 0x1C8134u;
label_1c8134:
    // 0x1c8134: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c8134u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8138: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8138u;
    {
        const bool branch_taken_0x1c8138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8138u;
        // 0x1c813c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8138) {
            ctx->pc = 0x1C814Cu;
            goto label_1c814c;
        }
    }
    ctx->pc = 0x1C8140u;
    // 0x1c8140: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C8140u;
    SET_GPR_U32(ctx, 31, 0x1C8148u);
    ctx->pc = 0x1C8144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8140u;
    // 0x1c8144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C8140u, 0x1C8148u)) {
        return;
    }
    ctx->pc = 0x1C8148u;
label_1c8148:
    // 0x1c8148: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x1c8148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
label_1c814c:
    // 0x1c814c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c814cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8150: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c8150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8154: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c8154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8158: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c8158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c815c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C815Cu;
        // 0x1c8160: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8164u;
    // 0x1c8164: 0x0  nop
    ctx->pc = 0x1c8164u;
    // NOP
    ctx->pc = 0x1c8168u;
}
