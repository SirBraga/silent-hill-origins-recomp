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

// Function: sub_0024F4F8
// Address: 0x24f4f8 - 0x24f648
void sub_0024F4F8_0x24f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F4F8_0x24f4f8");
#endif

    switch (ctx->pc) {
        case 0x24f4f8u: goto label_24f4f8;
        case 0x24f4fcu: goto label_24f4fc;
        case 0x24f500u: goto label_24f500;
        case 0x24f504u: goto label_24f504;
        case 0x24f508u: goto label_24f508;
        case 0x24f50cu: goto label_24f50c;
        case 0x24f510u: goto label_24f510;
        case 0x24f514u: goto label_24f514;
        case 0x24f518u: goto label_24f518;
        case 0x24f51cu: goto label_24f51c;
        case 0x24f520u: goto label_24f520;
        case 0x24f524u: goto label_24f524;
        case 0x24f528u: goto label_24f528;
        case 0x24f52cu: goto label_24f52c;
        case 0x24f530u: goto label_24f530;
        case 0x24f534u: goto label_24f534;
        case 0x24f538u: goto label_24f538;
        case 0x24f53cu: goto label_24f53c;
        case 0x24f540u: goto label_24f540;
        case 0x24f544u: goto label_24f544;
        case 0x24f548u: goto label_24f548;
        case 0x24f54cu: goto label_24f54c;
        case 0x24f550u: goto label_24f550;
        case 0x24f554u: goto label_24f554;
        case 0x24f558u: goto label_24f558;
        case 0x24f55cu: goto label_24f55c;
        case 0x24f560u: goto label_24f560;
        case 0x24f564u: goto label_24f564;
        case 0x24f568u: goto label_24f568;
        case 0x24f56cu: goto label_24f56c;
        case 0x24f570u: goto label_24f570;
        case 0x24f574u: goto label_24f574;
        case 0x24f578u: goto label_24f578;
        case 0x24f57cu: goto label_24f57c;
        case 0x24f580u: goto label_24f580;
        case 0x24f584u: goto label_24f584;
        case 0x24f588u: goto label_24f588;
        case 0x24f58cu: goto label_24f58c;
        case 0x24f590u: goto label_24f590;
        case 0x24f594u: goto label_24f594;
        case 0x24f598u: goto label_24f598;
        case 0x24f59cu: goto label_24f59c;
        case 0x24f5a0u: goto label_24f5a0;
        case 0x24f5a4u: goto label_24f5a4;
        case 0x24f5a8u: goto label_24f5a8;
        case 0x24f5acu: goto label_24f5ac;
        case 0x24f5b0u: goto label_24f5b0;
        case 0x24f5b4u: goto label_24f5b4;
        case 0x24f5b8u: goto label_24f5b8;
        case 0x24f5bcu: goto label_24f5bc;
        case 0x24f5c0u: goto label_24f5c0;
        case 0x24f5c4u: goto label_24f5c4;
        case 0x24f5c8u: goto label_24f5c8;
        case 0x24f5ccu: goto label_24f5cc;
        case 0x24f5d0u: goto label_24f5d0;
        case 0x24f5d4u: goto label_24f5d4;
        case 0x24f5d8u: goto label_24f5d8;
        case 0x24f5dcu: goto label_24f5dc;
        case 0x24f5e0u: goto label_24f5e0;
        case 0x24f5e4u: goto label_24f5e4;
        case 0x24f5e8u: goto label_24f5e8;
        case 0x24f5ecu: goto label_24f5ec;
        case 0x24f5f0u: goto label_24f5f0;
        case 0x24f5f4u: goto label_24f5f4;
        case 0x24f5f8u: goto label_24f5f8;
        case 0x24f5fcu: goto label_24f5fc;
        case 0x24f600u: goto label_24f600;
        case 0x24f604u: goto label_24f604;
        case 0x24f608u: goto label_24f608;
        case 0x24f60cu: goto label_24f60c;
        case 0x24f610u: goto label_24f610;
        case 0x24f614u: goto label_24f614;
        case 0x24f618u: goto label_24f618;
        case 0x24f61cu: goto label_24f61c;
        case 0x24f620u: goto label_24f620;
        case 0x24f624u: goto label_24f624;
        case 0x24f628u: goto label_24f628;
        case 0x24f62cu: goto label_24f62c;
        case 0x24f630u: goto label_24f630;
        case 0x24f634u: goto label_24f634;
        case 0x24f638u: goto label_24f638;
        case 0x24f63cu: goto label_24f63c;
        case 0x24f640u: goto label_24f640;
        case 0x24f644u: goto label_24f644;
        default: break;
    }

    ctx->pc = 0x24f4f8u;

label_24f4f8:
    // 0x24f4f8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x24f4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_24f4fc:
    // 0x24f4fc: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x24f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_24f500:
    // 0x24f500: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x24f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_24f504:
    // 0x24f504: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24f504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24f508:
    // 0x24f508: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x24f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_24f50c:
    // 0x24f50c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24f50cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24f510:
    // 0x24f510: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x24f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_24f514:
    // 0x24f514: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24f514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f518:
    // 0x24f518: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x24f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_24f51c:
    // 0x24f51c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24f51cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24f520:
    // 0x24f520: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x24f520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_24f524:
    // 0x24f524: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x24f524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_24f528:
    // 0x24f528: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x24f528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_24f52c:
    // 0x24f52c: 0x16600016  bnez        $s3, . + 4 + (0x16 << 2)
label_24f530:
    if (ctx->pc == 0x24F530u) {
        ctx->pc = 0x24F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F52Cu;
        // 0x24f530: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F534u;
        goto label_24f534;
    }
    ctx->pc = 0x24F52Cu;
    {
        const bool branch_taken_0x24f52c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F52Cu;
        // 0x24f530: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f52c) {
            ctx->pc = 0x24F588u;
            goto label_24f588;
        }
    }
    ctx->pc = 0x24F534u;
label_24f534:
    // 0x24f534: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24f534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24f538:
    // 0x24f538: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x24f538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_24f53c:
    // 0x24f53c: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x24f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_24f540:
    // 0x24f540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24f544:
    // 0x24f544: 0x40f809  jalr        $v0
label_24f548:
    if (ctx->pc == 0x24F548u) {
        ctx->pc = 0x24F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F544u;
        // 0x24f548: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F54Cu;
        goto label_24f54c;
    }
    ctx->pc = 0x24F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F54Cu);
        ctx->pc = 0x24F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F544u;
        // 0x24f548: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F544u, 0x24F54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F54Cu;
label_24f54c:
    // 0x24f54c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24f54cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24f550:
    // 0x24f550: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
label_24f554:
    if (ctx->pc == 0x24F554u) {
        ctx->pc = 0x24F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F550u;
        // 0x24f554: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F558u;
        goto label_24f558;
    }
    ctx->pc = 0x24F550u;
    {
        const bool branch_taken_0x24f550 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F550u;
        // 0x24f554: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f550) {
            ctx->pc = 0x24F588u;
            goto label_24f588;
        }
    }
    ctx->pc = 0x24F558u;
label_24f558:
    // 0x24f558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f55c:
    // 0x24f55c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24f560:
    // 0x24f560: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x24f560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_24f564:
    // 0x24f564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24f564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24f568:
    // 0x24f568: 0xc092848  jal         func_24A120
label_24f56c:
    if (ctx->pc == 0x24F56Cu) {
        ctx->pc = 0x24F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F568u;
        // 0x24f56c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F570u;
        goto label_24f570;
    }
    ctx->pc = 0x24F568u;
    SET_GPR_U32(ctx, 31, 0x24F570u);
    ctx->pc = 0x24F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F568u;
    // 0x24f56c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24F568u, 0x24F570u)) {
        return;
    }
    ctx->pc = 0x24F570u;
label_24f570:
    // 0x24f570: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x24f570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_24f574:
    // 0x24f574: 0xc09281a  jal         func_24A068
label_24f578:
    if (ctx->pc == 0x24F578u) {
        ctx->pc = 0x24F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F574u;
        // 0x24f578: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F57Cu;
        goto label_24f57c;
    }
    ctx->pc = 0x24F574u;
    SET_GPR_U32(ctx, 31, 0x24F57Cu);
    ctx->pc = 0x24F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F574u;
    // 0x24f578: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24F574u, 0x24F57Cu)) {
        return;
    }
    ctx->pc = 0x24F57Cu;
label_24f57c:
    // 0x24f57c: 0x10000026  b           . + 4 + (0x26 << 2)
label_24f580:
    if (ctx->pc == 0x24F580u) {
        ctx->pc = 0x24F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F57Cu;
        // 0x24f580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F584u;
        goto label_24f584;
    }
    ctx->pc = 0x24F57Cu;
    {
        const bool branch_taken_0x24f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F57Cu;
        // 0x24f580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f57c) {
            ctx->pc = 0x24F618u;
            goto label_24f618;
        }
    }
    ctx->pc = 0x24F584u;
label_24f584:
    // 0x24f584: 0x0  nop
    ctx->pc = 0x24f584u;
    // NOP
label_24f588:
    // 0x24f588: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_24f58c:
    if (ctx->pc == 0x24F58Cu) {
        ctx->pc = 0x24F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F588u;
        // 0x24f58c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F590u;
        goto label_24f590;
    }
    ctx->pc = 0x24F588u;
    {
        const bool branch_taken_0x24f588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F588u;
        // 0x24f58c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f588) {
            ctx->pc = 0x24F614u;
            goto label_24f614;
        }
    }
    ctx->pc = 0x24F590u;
label_24f590:
    // 0x24f590: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24f594:
    // 0x24f594: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x24f594u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24f598:
    // 0x24f598: 0x24570fc8  addiu       $s7, $v0, 0xFC8
    ctx->pc = 0x24f598u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24f59c:
    // 0x24f59c: 0x0  nop
    ctx->pc = 0x24f59cu;
    // NOP
label_24f5a0:
    // 0x24f5a0: 0x2e220081  sltiu       $v0, $s1, 0x81
    ctx->pc = 0x24f5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_24f5a4:
    // 0x24f5a4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x24f5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24f5a8:
    // 0x24f5a8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x24f5a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
label_24f5ac:
    // 0x24f5ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24f5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24f5b0:
    // 0x24f5b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f5b4:
    // 0x24f5b4: 0xc093546  jal         func_24D518
label_24f5b8:
    if (ctx->pc == 0x24F5B8u) {
        ctx->pc = 0x24F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5B4u;
        // 0x24f5b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5BCu;
        goto label_24f5bc;
    }
    ctx->pc = 0x24F5B4u;
    SET_GPR_U32(ctx, 31, 0x24F5BCu);
    ctx->pc = 0x24F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5B4u;
    // 0x24f5b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x24F5B4u, 0x24F5BCu)) {
        return;
    }
    ctx->pc = 0x24F5BCu;
label_24f5bc:
    // 0x24f5bc: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
label_24f5c0:
    if (ctx->pc == 0x24F5C0u) {
        ctx->pc = 0x24F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5BCu;
        // 0x24f5c0: 0x23842  srl         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5C4u;
        goto label_24f5c4;
    }
    ctx->pc = 0x24F5BCu;
    {
        const bool branch_taken_0x24f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x24F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5BCu;
        // 0x24f5c0: 0x23842  srl         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5bc) {
            ctx->pc = 0x24F5E0u;
            goto label_24f5e0;
        }
    }
    ctx->pc = 0x24F5C4u;
label_24f5c4:
    // 0x24f5c4: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_24f5c8:
    if (ctx->pc == 0x24F5C8u) {
        ctx->pc = 0x24F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5C4u;
        // 0x24f5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5CCu;
        goto label_24f5cc;
    }
    ctx->pc = 0x24F5C4u;
    {
        const bool branch_taken_0x24f5c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5C4u;
        // 0x24f5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5c4) {
            ctx->pc = 0x24F618u;
            goto label_24f618;
        }
    }
    ctx->pc = 0x24F5CCu;
label_24f5cc:
    // 0x24f5cc: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x24f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_24f5d0:
    // 0x24f5d0: 0x40f809  jalr        $v0
label_24f5d4:
    if (ctx->pc == 0x24F5D4u) {
        ctx->pc = 0x24F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5D0u;
        // 0x24f5d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5D8u;
        goto label_24f5d8;
    }
    ctx->pc = 0x24F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F5D8u);
        ctx->pc = 0x24F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5D0u;
        // 0x24f5d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F5D0u, 0x24F5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F5D8u;
label_24f5d8:
    // 0x24f5d8: 0x1000000f  b           . + 4 + (0xF << 2)
label_24f5dc:
    if (ctx->pc == 0x24F5DCu) {
        ctx->pc = 0x24F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5D8u;
        // 0x24f5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5E0u;
        goto label_24f5e0;
    }
    ctx->pc = 0x24F5D8u;
    {
        const bool branch_taken_0x24f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5D8u;
        // 0x24f5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5d8) {
            ctx->pc = 0x24F618u;
            goto label_24f618;
        }
    }
    ctx->pc = 0x24F5E0u;
label_24f5e0:
    // 0x24f5e0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x24f5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24f5e4:
    // 0x24f5e4: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_24f5e8:
    if (ctx->pc == 0x24F5E8u) {
        ctx->pc = 0x24F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5E4u;
        // 0x24f5e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5ECu;
        goto label_24f5ec;
    }
    ctx->pc = 0x24F5E4u;
    {
        const bool branch_taken_0x24f5e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5E4u;
        // 0x24f5e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5e4) {
            ctx->pc = 0x24F60Cu;
            goto label_24f60c;
        }
    }
    ctx->pc = 0x24F5ECu;
label_24f5ec:
    // 0x24f5ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24f5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f5f0:
    // 0x24f5f0: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x24f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_24f5f4:
    // 0x24f5f4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x24f5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_24f5f8:
    // 0x24f5f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24f5fc:
    // 0x24f5fc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x24f5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_24f600:
    // 0x24f600: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x24f600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_24f604:
    // 0x24f604: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_24f608:
    if (ctx->pc == 0x24F608u) {
        ctx->pc = 0x24F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F604u;
        // 0x24f608: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F60Cu;
        goto label_24f60c;
    }
    ctx->pc = 0x24F604u;
    {
        const bool branch_taken_0x24f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F604u;
        // 0x24f608: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f604) {
            ctx->pc = 0x24F5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f5f0;
        }
    }
    ctx->pc = 0x24F60Cu;
label_24f60c:
    // 0x24f60c: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
label_24f610:
    if (ctx->pc == 0x24F610u) {
        ctx->pc = 0x24F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F60Cu;
        // 0x24f610: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F614u;
        goto label_24f614;
    }
    ctx->pc = 0x24F60Cu;
    {
        const bool branch_taken_0x24f60c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F60Cu;
        // 0x24f610: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f60c) {
            ctx->pc = 0x24F5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f5a0;
        }
    }
    ctx->pc = 0x24F614u;
label_24f614:
    // 0x24f614: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24f614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f618:
    // 0x24f618: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x24f618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_24f61c:
    // 0x24f61c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x24f61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_24f620:
    // 0x24f620: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x24f620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_24f624:
    // 0x24f624: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x24f624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_24f628:
    // 0x24f628: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x24f628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_24f62c:
    // 0x24f62c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x24f62cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_24f630:
    // 0x24f630: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x24f630u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24f634:
    // 0x24f634: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x24f634u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24f638:
    // 0x24f638: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24f638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24f63c:
    // 0x24f63c: 0x3e00008  jr          $ra
label_24f640:
    if (ctx->pc == 0x24F640u) {
        ctx->pc = 0x24F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F63Cu;
        // 0x24f640: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F644u;
        goto label_24f644;
    }
    ctx->pc = 0x24F63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F63Cu;
        // 0x24f640: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F644u;
label_24f644:
    // 0x24f644: 0x0  nop
    ctx->pc = 0x24f644u;
    // NOP
    ctx->pc = 0x24f648u;
}
