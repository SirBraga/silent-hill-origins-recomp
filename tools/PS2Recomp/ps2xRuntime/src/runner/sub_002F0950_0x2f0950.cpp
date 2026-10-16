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

// Function: sub_002F0950
// Address: 0x2f0950 - 0x2f0aa8
void sub_002F0950_0x2f0950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0950_0x2f0950");
#endif

    switch (ctx->pc) {
        case 0x2f0968u: goto label_2f0968;
        case 0x2f09a8u: goto label_2f09a8;
        default: break;
    }

    ctx->pc = 0x2f0950u;

    // 0x2f0950: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f0950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0954: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2f0954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0958: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x2f0958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f095c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f095cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0960: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2f0960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2f0964: 0x0  nop
    ctx->pc = 0x2f0964u;
    // NOP
label_2f0968:
    // 0x2f0968: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2f0968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f096c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f0970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f0970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f0974: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2f0974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f0978: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F0978u;
    {
        const bool branch_taken_0x2f0978 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2F097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0978u;
        // 0x2f097c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0978) {
            ctx->pc = 0x2F0968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0968;
        }
    }
    ctx->pc = 0x2F0980u;
    // 0x2f0980: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x2f0980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f0984: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F0984u;
    {
        const bool branch_taken_0x2f0984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0984u;
        // 0x2f0988: 0x91040000  lbu         $a0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0984) {
            ctx->pc = 0x2F0A98u;
            goto label_2f0a98;
        }
    }
    ctx->pc = 0x2F098Cu;
    // 0x2f098c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f098cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f0990: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2f0990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2f0994: 0x244afff8  addiu       $t2, $v0, -0x8
    ctx->pc = 0x2f0994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2f0998: 0x246e0008  addiu       $t6, $v1, 0x8
    ctx->pc = 0x2f0998u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2f099c: 0x254d0002  addiu       $t5, $t2, 0x2
    ctx->pc = 0x2f099cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2f09a0: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x2f09a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2f09a4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x2f09a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f09a8:
    // 0x2f09a8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2f09ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f09acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09b0: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x2f09b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f09b4: 0x24c2ffe0  addiu       $v0, $a2, -0x20
    ctx->pc = 0x2f09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x2f09b8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x2f09b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f09bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F09BCu;
    {
        const bool branch_taken_0x2f09bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09BCu;
        // 0x2f09c0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09bc) {
            ctx->pc = 0x2F09CCu;
            goto label_2f09cc;
        }
    }
    ctx->pc = 0x2F09C4u;
    // 0x2f09c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F09C4u;
    {
        const bool branch_taken_0x2f09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09C4u;
        // 0x2f09c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09c4) {
            ctx->pc = 0x2F0A40u;
            goto label_2f0a40;
        }
    }
    ctx->pc = 0x2F09CCu;
label_2f09cc:
    // 0x2f09cc: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x2f09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2f09d0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f09d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f09d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F09D4u;
    {
        const bool branch_taken_0x2f09d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09D4u;
        // 0x2f09d8: 0x24c2ffc6  addiu       $v0, $a2, -0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09d4) {
            ctx->pc = 0x2F09E4u;
            goto label_2f09e4;
        }
    }
    ctx->pc = 0x2F09DCu;
    // 0x2f09dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F09DCu;
    {
        const bool branch_taken_0x2f09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09DCu;
        // 0x2f09e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09dc) {
            ctx->pc = 0x2F0A40u;
            goto label_2f0a40;
        }
    }
    ctx->pc = 0x2F09E4u;
label_2f09e4:
    // 0x2f09e4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2f09e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f09e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F09E8u;
    {
        const bool branch_taken_0x2f09e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09E8u;
        // 0x2f09ec: 0x24c2ffbf  addiu       $v0, $a2, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09e8) {
            ctx->pc = 0x2F09F8u;
            goto label_2f09f8;
        }
    }
    ctx->pc = 0x2F09F0u;
    // 0x2f09f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F09F0u;
    {
        const bool branch_taken_0x2f09f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09F0u;
        // 0x2f09f4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09f0) {
            ctx->pc = 0x2F0A40u;
            goto label_2f0a40;
        }
    }
    ctx->pc = 0x2F09F8u;
label_2f09f8:
    // 0x2f09f8: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2f09f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2f09fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F09FCu;
    {
        const bool branch_taken_0x2f09fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09FCu;
        // 0x2f0a00: 0x24c2ffa5  addiu       $v0, $a2, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09fc) {
            ctx->pc = 0x2F0A0Cu;
            goto label_2f0a0c;
        }
    }
    ctx->pc = 0x2F0A04u;
    // 0x2f0a04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F0A04u;
    {
        const bool branch_taken_0x2f0a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A04u;
        // 0x2f0a08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a04) {
            ctx->pc = 0x2F0A40u;
            goto label_2f0a40;
        }
    }
    ctx->pc = 0x2F0A0Cu;
label_2f0a0c:
    // 0x2f0a0c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f0a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f0a10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0A10u;
    {
        const bool branch_taken_0x2f0a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A10u;
        // 0x2f0a14: 0x24c2ff9f  addiu       $v0, $a2, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a10) {
            ctx->pc = 0x2F0A20u;
            goto label_2f0a20;
        }
    }
    ctx->pc = 0x2F0A18u;
    // 0x2f0a18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0A18u;
    {
        const bool branch_taken_0x2f0a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A18u;
        // 0x2f0a1c: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a18) {
            ctx->pc = 0x2F0A40u;
            goto label_2f0a40;
        }
    }
    ctx->pc = 0x2F0A20u;
label_2f0a20:
    // 0x2f0a20: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2f0a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2f0a24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0A24u;
    {
        const bool branch_taken_0x2f0a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A24u;
        // 0x2f0a28: 0x24c2ff85  addiu       $v0, $a2, -0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a24) {
            ctx->pc = 0x2F0A34u;
            goto label_2f0a34;
        }
    }
    ctx->pc = 0x2F0A2Cu;
    // 0x2f0a2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0A2Cu;
    {
        const bool branch_taken_0x2f0a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A2Cu;
        // 0x2f0a30: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a2c) {
            ctx->pc = 0x2F0A40u;
            goto label_2f0a40;
        }
    }
    ctx->pc = 0x2F0A34u;
label_2f0a34:
    // 0x2f0a34: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x2f0a34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a38: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x2f0a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f0a3c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f0a3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_2f0a40:
    // 0x2f0a40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0A40u;
    {
        const bool branch_taken_0x2f0a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A40u;
        // 0x2f0a44: 0x2462001f  addiu       $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a40) {
            ctx->pc = 0x2F0A5Cu;
            goto label_2f0a5c;
        }
    }
    ctx->pc = 0x2F0A48u;
    // 0x2f0a48: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2f0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f0a4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f0a50: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2f0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2f0a54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0A54u;
    {
        const bool branch_taken_0x2f0a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A54u;
        // 0x2f0a58: 0x94430000  lhu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a54) {
            ctx->pc = 0x2F0A78u;
            goto label_2f0a78;
        }
    }
    ctx->pc = 0x2F0A5Cu;
label_2f0a5c:
    // 0x2f0a5c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2f0a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2f0a60: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x2f0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f0a64: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x2f0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2f0a68: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2f0a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0a6c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x2f0a6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f0a70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2f0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f0a74: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x2f0a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f0a78:
    // 0x2f0a78: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x2f0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2f0a7c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2f0a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f0a80: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f0a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f0a84: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2f0a84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f0a88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f0a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f0a8c: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x2f0a8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f0a90: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2F0A90u;
    {
        const bool branch_taken_0x2f0a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A90u;
        // 0x2f0a94: 0x91040000  lbu         $a0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a90) {
            ctx->pc = 0x2F09A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f09a8;
        }
    }
    ctx->pc = 0x2F0A98u;
label_2f0a98:
    // 0x2f0a98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0AA0u;
    // 0x2f0aa0: 0x0  nop
    ctx->pc = 0x2f0aa0u;
    // NOP
    // 0x2f0aa4: 0x0  nop
    ctx->pc = 0x2f0aa4u;
    // NOP
    ctx->pc = 0x2f0aa8u;
}
