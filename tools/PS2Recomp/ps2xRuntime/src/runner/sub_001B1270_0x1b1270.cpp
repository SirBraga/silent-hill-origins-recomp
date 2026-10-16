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

// Function: sub_001B1270
// Address: 0x1b1270 - 0x1b13b0
void sub_001B1270_0x1b1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1270_0x1b1270");
#endif

    switch (ctx->pc) {
        case 0x1b131cu: goto label_1b131c;
        case 0x1b1398u: goto label_1b1398;
        default: break;
    }

    ctx->pc = 0x1b1270u;

    // 0x1b1270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1274: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x1b1274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1b1278: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b127c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1280: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1b1284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1288: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B1288u;
    {
        const bool branch_taken_0x1b1288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1288u;
        // 0x1b128c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1288) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B1290u;
    // 0x1b1290: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b1290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b1294: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b1294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b1298: 0x2442c0e0  addiu       $v0, $v0, -0x3F20
    ctx->pc = 0x1b1298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951136));
    // 0x1b129c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b12a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b12a4: 0x800008  jr          $a0
    ctx->pc = 0x1B12A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B12ACu: goto label_1b12ac;
            case 0x1B12B4u: goto label_1b12b4;
            case 0x1B12BCu: goto label_1b12bc;
            case 0x1B12C4u: goto label_1b12c4;
            case 0x1B12CCu: goto label_1b12cc;
            case 0x1B12D4u: goto label_1b12d4;
            case 0x1B12DCu: goto label_1b12dc;
            case 0x1B12E4u: goto label_1b12e4;
            case 0x1B12ECu: goto label_1b12ec;
            case 0x1B12F4u: goto label_1b12f4;
            case 0x1B12F8u: goto label_1b12f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B12A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B12ACu;
label_1b12ac:
    // 0x1b12ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B12ACu;
    {
        const bool branch_taken_0x1b12ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ACu;
        // 0x1b12b0: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12ac) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12B4u;
label_1b12b4:
    // 0x1b12b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B12B4u;
    {
        const bool branch_taken_0x1b12b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B4u;
        // 0x1b12b8: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12b4) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12BCu;
label_1b12bc:
    // 0x1b12bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B12BCu;
    {
        const bool branch_taken_0x1b12bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12BCu;
        // 0x1b12c0: 0x24100017  addiu       $s0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12bc) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12C4u;
label_1b12c4:
    // 0x1b12c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B12C4u;
    {
        const bool branch_taken_0x1b12c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C4u;
        // 0x1b12c8: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c4) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12CCu;
label_1b12cc:
    // 0x1b12cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B12CCu;
    {
        const bool branch_taken_0x1b12cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12CCu;
        // 0x1b12d0: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12cc) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12D4u;
label_1b12d4:
    // 0x1b12d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B12D4u;
    {
        const bool branch_taken_0x1b12d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12D4u;
        // 0x1b12d8: 0x2410001a  addiu       $s0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12d4) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12DCu;
label_1b12dc:
    // 0x1b12dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B12DCu;
    {
        const bool branch_taken_0x1b12dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12DCu;
        // 0x1b12e0: 0x2410001b  addiu       $s0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12dc) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12E4u;
label_1b12e4:
    // 0x1b12e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B12E4u;
    {
        const bool branch_taken_0x1b12e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12E4u;
        // 0x1b12e8: 0x2410001c  addiu       $s0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12e4) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12ECu;
label_1b12ec:
    // 0x1b12ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B12ECu;
    {
        const bool branch_taken_0x1b12ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ECu;
        // 0x1b12f0: 0x2410001d  addiu       $s0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12ec) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12F4u;
label_1b12f4:
    // 0x1b12f4: 0x2410001e  addiu       $s0, $zero, 0x1E
    ctx->pc = 0x1b12f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b12f8:
    // 0x1b12f8: 0x3a020032  xori        $v0, $s0, 0x32
    ctx->pc = 0x1b12f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)50);
    // 0x1b12fc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B12FCu;
    {
        const bool branch_taken_0x1b12fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12FCu;
        // 0x1b1300: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12fc) {
            ctx->pc = 0x1B1398u;
            goto label_1b1398;
        }
    }
    ctx->pc = 0x1B1304u;
    // 0x1b1304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1308: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b1308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b130c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1310: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x1b1310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    // 0x1b1314: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B1314u;
    SET_GPR_U32(ctx, 31, 0x1B131Cu);
    ctx->pc = 0x1B1318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1314u;
    // 0x1b1318: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B1314u, 0x1B131Cu)) {
        return;
    }
    ctx->pc = 0x1B131Cu;
label_1b131c:
    // 0x1b131c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1324: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b1324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1328: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1b1328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b132c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1330: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x1b1330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x1b1334: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1b1334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1b1338: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1338u;
    {
        const bool branch_taken_0x1b1338 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1338u;
        // 0x1b133c: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1338) {
            ctx->pc = 0x1B1398u;
            goto label_1b1398;
        }
    }
    ctx->pc = 0x1B1340u;
    // 0x1b1340: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b1340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1344: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b1348: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1348u;
    {
        const bool branch_taken_0x1b1348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1348u;
        // 0x1b134c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1348) {
            ctx->pc = 0x1B1384u;
            goto label_1b1384;
        }
    }
    ctx->pc = 0x1B1350u;
    // 0x1b1350: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b1354: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b1354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b135c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b135cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1360: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b1360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b1364: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b1364u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1b1368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b136c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b1370: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1b1370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1b1374: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b137c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B137Cu;
    {
        const bool branch_taken_0x1b137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B137Cu;
        // 0x1b1380: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b137c) {
            ctx->pc = 0x1B1388u;
            goto label_1b1388;
        }
    }
    ctx->pc = 0x1B1384u;
label_1b1384:
    // 0x1b1384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1388:
    // 0x1b1388: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1388u;
    {
        const bool branch_taken_0x1b1388 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1388u;
        // 0x1b138c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1388) {
            ctx->pc = 0x1B139Cu;
            goto label_1b139c;
        }
    }
    ctx->pc = 0x1B1390u;
    // 0x1b1390: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B1390u;
    SET_GPR_U32(ctx, 31, 0x1B1398u);
    ctx->pc = 0x1B1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1390u;
    // 0x1b1394: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B1390u, 0x1B1398u)) {
        return;
    }
    ctx->pc = 0x1B1398u;
label_1b1398:
    // 0x1b1398: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b139c:
    // 0x1b139c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b139cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b13a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b13a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b13a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B13A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A4u;
        // 0x1b13a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B13A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B13ACu;
    // 0x1b13ac: 0x0  nop
    ctx->pc = 0x1b13acu;
    // NOP
    ctx->pc = 0x1b13b0u;
}
