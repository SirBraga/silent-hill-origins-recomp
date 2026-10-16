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

// Function: sub_0018F520
// Address: 0x18f520 - 0x18f650
void sub_0018F520_0x18f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F520_0x18f520");
#endif

    switch (ctx->pc) {
        case 0x18f63cu: goto label_18f63c;
        default: break;
    }

    ctx->pc = 0x18f520u;

    // 0x18f520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f524: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18f524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f528: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x18F528u;
    {
        const bool branch_taken_0x18f528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F528u;
        // 0x18f52c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f528) {
            ctx->pc = 0x18F5E4u;
            goto label_18f5e4;
        }
    }
    ctx->pc = 0x18F530u;
    // 0x18f530: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18f534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18f534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f538: 0x8c4384d8  lw          $v1, -0x7B28($v0)
    ctx->pc = 0x18f538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3384D8u));
    // 0x18f53c: 0x10640040  beq         $v1, $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x18F53Cu;
    {
        const bool branch_taken_0x18f53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x18F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F53Cu;
        // 0x18f540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f53c) {
            ctx->pc = 0x18F640u;
            goto label_18f640;
        }
    }
    ctx->pc = 0x18F544u;
    // 0x18f544: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x18f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x18f548: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x18f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
    // 0x18f54c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x18F54Cu;
    {
        const bool branch_taken_0x18f54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F54Cu;
        // 0x18f550: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f54c) {
            ctx->pc = 0x18F5E4u;
            goto label_18f5e4;
        }
    }
    ctx->pc = 0x18F554u;
    // 0x18f554: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x18f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x18f558: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F558u;
    {
        const bool branch_taken_0x18f558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x18F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F558u;
        // 0x18f55c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f558) {
            ctx->pc = 0x18F570u;
            goto label_18f570;
        }
    }
    ctx->pc = 0x18F560u;
    // 0x18f560: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F560u;
    {
        const bool branch_taken_0x18f560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F560u;
        // 0x18f564: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f560) {
            ctx->pc = 0x18F5A4u;
            goto label_18f5a4;
        }
    }
    ctx->pc = 0x18F568u;
    // 0x18f568: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18F568u;
    {
        const bool branch_taken_0x18f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F568u;
        // 0x18f56c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f568) {
            ctx->pc = 0x18F614u;
            goto label_18f614;
        }
    }
    ctx->pc = 0x18F570u;
label_18f570:
    // 0x18f570: 0x8cc3006c  lw          $v1, 0x6C($a2)
    ctx->pc = 0x18f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x18f574: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F574u;
    {
        const bool branch_taken_0x18f574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x18f574) {
            ctx->pc = 0x18F588u;
            goto label_18f588;
        }
    }
    ctx->pc = 0x18F57Cu;
    // 0x18f57c: 0xacc30070  sw          $v1, 0x70($a2)
    ctx->pc = 0x18f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 3));
    // 0x18f580: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18F580u;
    {
        const bool branch_taken_0x18f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F580u;
        // 0x18f584: 0xacc30074  sw          $v1, 0x74($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f580) {
            ctx->pc = 0x18F608u;
            goto label_18f608;
        }
    }
    ctx->pc = 0x18F588u;
label_18f588:
    // 0x18f588: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18F588u;
    {
        const bool branch_taken_0x18f588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f588) {
            ctx->pc = 0x18F58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F588u;
            // 0x18f58c: 0x8cc2006c  lw          $v0, 0x6C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F5D8u;
            goto label_18f5d8;
        }
    }
    ctx->pc = 0x18F590u;
    // 0x18f590: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x18f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x18f594: 0x5044000f  beql        $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F594u;
    {
        const bool branch_taken_0x18f594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x18f594) {
            ctx->pc = 0x18F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F594u;
            // 0x18f598: 0xacc30074  sw          $v1, 0x74($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F5D4u;
            goto label_18f5d4;
        }
    }
    ctx->pc = 0x18F59Cu;
    // 0x18f59c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18F59Cu;
    {
        const bool branch_taken_0x18f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F59Cu;
        // 0x18f5a0: 0xacc30078  sw          $v1, 0x78($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f59c) {
            ctx->pc = 0x18F5D4u;
            goto label_18f5d4;
        }
    }
    ctx->pc = 0x18F5A4u;
label_18f5a4:
    // 0x18f5a4: 0x8cc3006c  lw          $v1, 0x6C($a2)
    ctx->pc = 0x18f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x18f5a8: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F5A8u;
    {
        const bool branch_taken_0x18f5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x18f5a8) {
            ctx->pc = 0x18F5BCu;
            goto label_18f5bc;
        }
    }
    ctx->pc = 0x18F5B0u;
    // 0x18f5b0: 0xacc30070  sw          $v1, 0x70($a2)
    ctx->pc = 0x18f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 3));
    // 0x18f5b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18F5B4u;
    {
        const bool branch_taken_0x18f5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5B4u;
        // 0x18f5b8: 0xacc30078  sw          $v1, 0x78($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5b4) {
            ctx->pc = 0x18F608u;
            goto label_18f608;
        }
    }
    ctx->pc = 0x18F5BCu;
label_18f5bc:
    // 0x18f5bc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F5BCu;
    {
        const bool branch_taken_0x18f5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5bc) {
            ctx->pc = 0x18F5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F5BCu;
            // 0x18f5c0: 0x8cc2006c  lw          $v0, 0x6C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F5D8u;
            goto label_18f5d8;
        }
    }
    ctx->pc = 0x18F5C4u;
    // 0x18f5c4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x18f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x18f5c8: 0x54440002  bnel        $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F5C8u;
    {
        const bool branch_taken_0x18f5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x18f5c8) {
            ctx->pc = 0x18F5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F5C8u;
            // 0x18f5cc: 0xacc30078  sw          $v1, 0x78($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F5D4u;
            goto label_18f5d4;
        }
    }
    ctx->pc = 0x18F5D0u;
    // 0x18f5d0: 0xacc30074  sw          $v1, 0x74($a2)
    ctx->pc = 0x18f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 3));
label_18f5d4:
    // 0x18f5d4: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x18f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_18f5d8:
    // 0x18f5d8: 0xacc5006c  sw          $a1, 0x6C($a2)
    ctx->pc = 0x18f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 5));
    // 0x18f5dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18F5DCu;
    {
        const bool branch_taken_0x18f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5DCu;
        // 0x18f5e0: 0xacc20070  sw          $v0, 0x70($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5dc) {
            ctx->pc = 0x18F60Cu;
            goto label_18f60c;
        }
    }
    ctx->pc = 0x18F5E4u;
label_18f5e4:
    // 0x18f5e4: 0x8cc4006c  lw          $a0, 0x6C($a2)
    ctx->pc = 0x18f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x18f5e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F5E8u;
    {
        const bool branch_taken_0x18f5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5E8u;
        // 0x18f5ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5e8) {
            ctx->pc = 0x18F5FCu;
            goto label_18f5fc;
        }
    }
    ctx->pc = 0x18F5F0u;
    // 0x18f5f0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x18f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x18f5f4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x18F5F4u;
    {
        const bool branch_taken_0x18f5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f5f4) {
            ctx->pc = 0x18F5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F5F4u;
            // 0x18f5f8: 0xacc40078  sw          $a0, 0x78($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F5FCu;
            goto label_18f5fc;
        }
    }
    ctx->pc = 0x18F5FCu;
label_18f5fc:
    // 0x18f5fc: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x18f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x18f600: 0xacc00074  sw          $zero, 0x74($a2)
    ctx->pc = 0x18f600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 0));
    // 0x18f604: 0xacc20070  sw          $v0, 0x70($a2)
    ctx->pc = 0x18f604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 2));
label_18f608:
    // 0x18f608: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x18f608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
label_18f60c:
    // 0x18f60c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x18f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x18f610: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18f610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_18f614:
    // 0x18f614: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x18f614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x18f618: 0x8c45bd80  lw          $a1, -0x4280($v0)
    ctx->pc = 0x18f618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950272)));
    // 0x18f61c: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F61Cu;
    {
        const bool branch_taken_0x18f61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x18F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F61Cu;
        // 0x18f620: 0x8cc3006c  lw          $v1, 0x6C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f61c) {
            ctx->pc = 0x18F63Cu;
            goto label_18f63c;
        }
    }
    ctx->pc = 0x18F624u;
    // 0x18f624: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F628u;
    {
        const bool branch_taken_0x18f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F628u;
        // 0x18f62c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f628) {
            ctx->pc = 0x18F63Cu;
            goto label_18f63c;
        }
    }
    ctx->pc = 0x18F630u;
    // 0x18f630: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18f634: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x18F634u;
    SET_GPR_U32(ctx, 31, 0x18F63Cu);
    ctx->pc = 0x18F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F634u;
    // 0x18f638: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x18F634u, 0x18F63Cu)) {
        return;
    }
    ctx->pc = 0x18F63Cu;
label_18f63c:
    // 0x18f63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f640:
    // 0x18f640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f644: 0x3e00008  jr          $ra
    ctx->pc = 0x18F644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F644u;
        // 0x18f648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F64Cu;
    // 0x18f64c: 0x0  nop
    ctx->pc = 0x18f64cu;
    // NOP
    ctx->pc = 0x18f650u;
}
