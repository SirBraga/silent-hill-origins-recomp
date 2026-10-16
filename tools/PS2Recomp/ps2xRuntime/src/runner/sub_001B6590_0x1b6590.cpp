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

// Function: sub_001B6590
// Address: 0x1b6590 - 0x1b66c0
void sub_001B6590_0x1b6590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6590_0x1b6590");
#endif

    switch (ctx->pc) {
        case 0x1b65bcu: goto label_1b65bc;
        case 0x1b65c0u: goto label_1b65c0;
        case 0x1b6614u: goto label_1b6614;
        case 0x1b6640u: goto label_1b6640;
        case 0x1b6680u: goto label_1b6680;
        case 0x1b66a4u: goto label_1b66a4;
        default: break;
    }

    ctx->pc = 0x1b6590u;

    // 0x1b6590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6594: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b6598: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b6598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b659c: 0x2442ca30  addiu       $v0, $v0, -0x35D0
    ctx->pc = 0x1b659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x1b65a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b65a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b65a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b65a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b65ac: 0x2630028c  addiu       $s0, $s1, 0x28C
    ctx->pc = 0x1b65acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 652));
    // 0x1b65b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b65b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b65b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b65b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65b8: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1b65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
label_1b65bc:
    // 0x1b65bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b65c0:
    // 0x1b65c0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B65C0u;
    {
        const bool branch_taken_0x1b65c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65c0) {
            ctx->pc = 0x1B65C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B65C0u;
            // 0x1b65c4: 0x2630028c  addiu       $s0, $s1, 0x28C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 652));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6624u;
            goto label_1b6624;
        }
    }
    ctx->pc = 0x1B65C8u;
    // 0x1b65c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b65cc: 0x0  nop
    ctx->pc = 0x1b65ccu;
    // NOP
    // 0x1b65d0: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B65D0u;
    {
        const bool branch_taken_0x1b65d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65d0) {
            ctx->pc = 0x1B65C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b65c0;
        }
    }
    ctx->pc = 0x1B65D8u;
    // 0x1b65d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b65dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B65DCu;
    {
        const bool branch_taken_0x1b65dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65DCu;
        // 0x1b65e0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65dc) {
            ctx->pc = 0x1B65F0u;
            goto label_1b65f0;
        }
    }
    ctx->pc = 0x1B65E4u;
    // 0x1b65e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B65E4u;
    {
        const bool branch_taken_0x1b65e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65E4u;
        // 0x1b65e8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65e4) {
            ctx->pc = 0x1B65F4u;
            goto label_1b65f4;
        }
    }
    ctx->pc = 0x1B65ECu;
    // 0x1b65ec: 0x0  nop
    ctx->pc = 0x1b65ecu;
    // NOP
label_1b65f0:
    // 0x1b65f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b65f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b65f4:
    // 0x1b65f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b65f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B65F8u;
    {
        const bool branch_taken_0x1b65f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65F8u;
        // 0x1b65fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65f8) {
            ctx->pc = 0x1B6608u;
            goto label_1b6608;
        }
    }
    ctx->pc = 0x1B6600u;
    // 0x1b6600: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6600u;
    {
        const bool branch_taken_0x1b6600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6600u;
        // 0x1b6604: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6600) {
            ctx->pc = 0x1B660Cu;
            goto label_1b660c;
        }
    }
    ctx->pc = 0x1B6608u;
label_1b6608:
    // 0x1b6608: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b6608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b660c:
    // 0x1b660c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B660Cu;
    SET_GPR_U32(ctx, 31, 0x1B6614u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B660Cu, 0x1B6614u)) {
        return;
    }
    ctx->pc = 0x1B6614u;
label_1b6614:
    // 0x1b6614: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6618: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b661c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B661Cu;
    {
        const bool branch_taken_0x1b661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B661Cu;
        // 0x1b6620: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b661c) {
            ctx->pc = 0x1B65BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b65bc;
        }
    }
    ctx->pc = 0x1B6624u;
label_1b6624:
    // 0x1b6624: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b6624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b6628: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x1b662c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6630: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B6630u;
    {
        const bool branch_taken_0x1b6630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6630u;
        // 0x1b6634: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6630) {
            ctx->pc = 0x1B6698u;
            goto label_1b6698;
        }
    }
    ctx->pc = 0x1B6638u;
    // 0x1b6638: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b6638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b663c: 0x0  nop
    ctx->pc = 0x1b663cu;
    // NOP
label_1b6640:
    // 0x1b6640: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6640u;
    {
        const bool branch_taken_0x1b6640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6640) {
            ctx->pc = 0x1B6644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6640u;
            // 0x1b6644: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6690u;
            goto label_1b6690;
        }
    }
    ctx->pc = 0x1B6648u;
    // 0x1b6648: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b6648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b664c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B664Cu;
    {
        const bool branch_taken_0x1b664c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B664Cu;
        // 0x1b6650: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b664c) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B6654u;
    // 0x1b6654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6654u;
    {
        const bool branch_taken_0x1b6654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6654u;
        // 0x1b6658: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6654) {
            ctx->pc = 0x1B6660u;
            goto label_1b6660;
        }
    }
    ctx->pc = 0x1B665Cu;
label_1b665c:
    // 0x1b665c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b665cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b6660:
    // 0x1b6660: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b6660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6664: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6664u;
    {
        const bool branch_taken_0x1b6664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6664u;
        // 0x1b6668: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6664) {
            ctx->pc = 0x1B6674u;
            goto label_1b6674;
        }
    }
    ctx->pc = 0x1B666Cu;
    // 0x1b666c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B666Cu;
    {
        const bool branch_taken_0x1b666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B666Cu;
        // 0x1b6670: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b666c) {
            ctx->pc = 0x1B6678u;
            goto label_1b6678;
        }
    }
    ctx->pc = 0x1B6674u;
label_1b6674:
    // 0x1b6674: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b6674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b6678:
    // 0x1b6678: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B6678u;
    SET_GPR_U32(ctx, 31, 0x1B6680u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B6678u, 0x1B6680u)) {
        return;
    }
    ctx->pc = 0x1B6680u;
label_1b6680:
    // 0x1b6680: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6688: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b6688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b668c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b6690:
    // 0x1b6690: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B6690u;
    {
        const bool branch_taken_0x1b6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6690) {
            ctx->pc = 0x1B6694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6690u;
            // 0x1b6694: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6640;
        }
    }
    ctx->pc = 0x1B6698u;
label_1b6698:
    // 0x1b6698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b669c: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1B669Cu;
    SET_GPR_U32(ctx, 31, 0x1B66A4u);
    ctx->pc = 0x1B66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B669Cu;
    // 0x1b66a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1B669Cu, 0x1B66A4u)) {
        return;
    }
    ctx->pc = 0x1B66A4u;
label_1b66a4:
    // 0x1b66a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b66a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b66a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b66a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b66ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b66acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b66b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b66b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b66b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B66B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66B4u;
        // 0x1b66b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B66B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B66BCu;
    // 0x1b66bc: 0x0  nop
    ctx->pc = 0x1b66bcu;
    // NOP
    ctx->pc = 0x1b66c0u;
}
