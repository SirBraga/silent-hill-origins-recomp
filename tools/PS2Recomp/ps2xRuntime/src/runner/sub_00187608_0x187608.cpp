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

// Function: sub_00187608
// Address: 0x187608 - 0x1879d8
void sub_00187608_0x187608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187608_0x187608");
#endif

    switch (ctx->pc) {
        case 0x187654u: goto label_187654;
        case 0x18766cu: goto label_18766c;
        case 0x187680u: goto label_187680;
        case 0x18769cu: goto label_18769c;
        case 0x1876d8u: goto label_1876d8;
        case 0x1876e8u: goto label_1876e8;
        case 0x187704u: goto label_187704;
        case 0x187738u: goto label_187738;
        case 0x187760u: goto label_187760;
        case 0x18777cu: goto label_18777c;
        case 0x1877a0u: goto label_1877a0;
        case 0x1877d4u: goto label_1877d4;
        case 0x1877ecu: goto label_1877ec;
        case 0x187820u: goto label_187820;
        case 0x187848u: goto label_187848;
        case 0x18785cu: goto label_18785c;
        case 0x187898u: goto label_187898;
        case 0x1878bcu: goto label_1878bc;
        case 0x1878c8u: goto label_1878c8;
        case 0x1878f8u: goto label_1878f8;
        case 0x187914u: goto label_187914;
        case 0x187928u: goto label_187928;
        case 0x187990u: goto label_187990;
        case 0x1879a8u: goto label_1879a8;
        case 0x1879bcu: goto label_1879bc;
        default: break;
    }

    ctx->pc = 0x187608u;

    // 0x187608: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18760c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x187610: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x187610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x187614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187618: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x187618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18761c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x187620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187624: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x187624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187628: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x187628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18762c: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18762Cu;
    {
        const bool branch_taken_0x18762c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x187630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18762Cu;
        // 0x187630: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18762c) {
            ctx->pc = 0x1876A4u;
            goto label_1876a4;
        }
    }
    ctx->pc = 0x187634u;
    // 0x187634: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x187634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x187638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x187638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18763c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18763Cu;
    {
        const bool branch_taken_0x18763c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18763Cu;
        // 0x187640: 0x24458800  addiu       $a1, $v0, -0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18763c) {
            ctx->pc = 0x187648u;
            goto label_187648;
        }
    }
    ctx->pc = 0x187644u;
    // 0x187644: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x187644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_187648:
    // 0x187648: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x187648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18764c: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x18764Cu;
    SET_GPR_U32(ctx, 31, 0x187654u);
    ctx->pc = 0x187650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18764Cu;
    // 0x187650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x18764Cu, 0x187654u)) {
        return;
    }
    ctx->pc = 0x187654u;
label_187654:
    // 0x187654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187658: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x187658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x18765c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18765Cu;
    {
        const bool branch_taken_0x18765c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18765Cu;
        // 0x187660: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18765c) {
            ctx->pc = 0x18766Cu;
            goto label_18766c;
        }
    }
    ctx->pc = 0x187664u;
    // 0x187664: 0xc0616e6  jal         func_185B98
    ctx->pc = 0x187664u;
    SET_GPR_U32(ctx, 31, 0x18766Cu);
    ctx->pc = 0x185B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185B98u, 0x187664u, 0x18766Cu)) {
        return;
    }
    ctx->pc = 0x18766Cu;
label_18766c:
    // 0x18766c: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x18766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x187670: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x187670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x187674: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x187674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x187678: 0xc0616c6  jal         func_185B18
    ctx->pc = 0x187678u;
    SET_GPR_U32(ctx, 31, 0x187680u);
    ctx->pc = 0x18767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187678u;
    // 0x18767c: 0xc60c007c  lwc1        $f12, 0x7C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185B18u, 0x187678u, 0x187680u)) {
        return;
    }
    ctx->pc = 0x187680u;
label_187680:
    // 0x187680: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x187680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x187684: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x187684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x187688: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x187688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x18768c: 0x24a58878  addiu       $a1, $a1, -0x7788
    ctx->pc = 0x18768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    // 0x187690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187694: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x187694u;
    SET_GPR_U32(ctx, 31, 0x18769Cu);
    ctx->pc = 0x187698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187694u;
    // 0x187698: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x187694u, 0x18769Cu)) {
        return;
    }
    ctx->pc = 0x18769Cu;
label_18769c:
    // 0x18769c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x18769Cu;
    {
        const bool branch_taken_0x18769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18769Cu;
        // 0x1876a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18769c) {
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x1876A4u;
label_1876a4:
    // 0x1876a4: 0x8c438878  lw          $v1, -0x7788($v0)
    ctx->pc = 0x1876a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936696)));
    // 0x1876a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1876a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876ac: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1876ACu;
    {
        const bool branch_taken_0x1876ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1876B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876ACu;
        // 0x1876b0: 0x24528878  addiu       $s2, $v0, -0x7788 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876ac) {
            ctx->pc = 0x1877F4u;
            goto label_1877f4;
        }
    }
    ctx->pc = 0x1876B4u;
    // 0x1876b4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1876b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1876b8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1876B8u;
    {
        const bool branch_taken_0x1876b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876B8u;
        // 0x1876bc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876b8) {
            ctx->pc = 0x187784u;
            goto label_187784;
        }
    }
    ctx->pc = 0x1876C0u;
    // 0x1876c0: 0xac4086b8  sw          $zero, -0x7948($v0)
    ctx->pc = 0x1876c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936248), GPR_U32(ctx, 0));
    // 0x1876c4: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1876c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1876c8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1876C8u;
    {
        const bool branch_taken_0x1876c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C8u;
        // 0x1876cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876c8) {
            ctx->pc = 0x1876ECu;
            goto label_1876ec;
        }
    }
    ctx->pc = 0x1876D0u;
    // 0x1876d0: 0xc061328  jal         func_184CA0
    ctx->pc = 0x1876D0u;
    SET_GPR_U32(ctx, 31, 0x1876D8u);
    ctx->pc = 0x1876D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1876D0u;
    // 0x1876d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x184CA0u, 0x1876D0u, 0x1876D8u)) {
        return;
    }
    ctx->pc = 0x1876D8u;
label_1876d8:
    // 0x1876d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1876D8u;
    {
        const bool branch_taken_0x1876d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876D8u;
        // 0x1876dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876d8) {
            ctx->pc = 0x1876ECu;
            goto label_1876ec;
        }
    }
    ctx->pc = 0x1876E0u;
    // 0x1876e0: 0xc043a38  jal         func_10E8E0
    ctx->pc = 0x1876E0u;
    SET_GPR_U32(ctx, 31, 0x1876E8u);
    ctx->pc = 0x1876E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1876E0u;
    // 0x1876e4: 0x8c4482f0  lw          $a0, -0x7D10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E8E0u, 0x1876E0u, 0x1876E8u)) {
        return;
    }
    ctx->pc = 0x1876E8u;
label_1876e8:
    // 0x1876e8: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1876e8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1876ec:
    // 0x1876ec: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1876ECu;
    {
        const bool branch_taken_0x1876ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876ECu;
        // 0x1876f0: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876ec) {
            ctx->pc = 0x187768u;
            goto label_187768;
        }
    }
    ctx->pc = 0x1876F4u;
    // 0x1876f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1876f8: 0x24a58828  addiu       $a1, $a1, -0x77D8
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936616));
    // 0x1876fc: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x1876FCu;
    SET_GPR_U32(ctx, 31, 0x187704u);
    ctx->pc = 0x187700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1876FCu;
    // 0x187700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x1876FCu, 0x187704u)) {
        return;
    }
    ctx->pc = 0x187704u;
label_187704:
    // 0x187704: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x187708: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x187708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x18770c: 0x8c44bcf0  lw          $a0, -0x4310($v0)
    ctx->pc = 0x18770cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBCF0u));
    // 0x187710: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x187710u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x187714: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187714u;
    {
        const bool branch_taken_0x187714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x187718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187714u;
        // 0x187718: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187714) {
            ctx->pc = 0x187738u;
            goto label_187738;
        }
    }
    ctx->pc = 0x18771Cu;
    // 0x18771c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187720u;
    {
        const bool branch_taken_0x187720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187720u;
        // 0x187724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187720) {
            ctx->pc = 0x18773Cu;
            goto label_18773c;
        }
    }
    ctx->pc = 0x187728u;
    // 0x187728: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x187728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18772c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187730: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x187730u;
    SET_GPR_U32(ctx, 31, 0x187738u);
    ctx->pc = 0x187734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187730u;
    // 0x187734: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x187730u, 0x187738u)) {
        return;
    }
    ctx->pc = 0x187738u;
label_187738:
    // 0x187738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18773c:
    // 0x18773c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x187740: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x187740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x187744: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x187744u;
    {
        const bool branch_taken_0x187744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187744u;
        // 0x187748: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187744) {
            ctx->pc = 0x1877E0u;
            goto label_1877e0;
        }
    }
    ctx->pc = 0x18774Cu;
    // 0x18774c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x187750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187754: 0x8c62870c  lw          $v0, -0x78F4($v1)
    ctx->pc = 0x187754u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x187758: 0xc05e278  jal         func_1789E0
    ctx->pc = 0x187758u;
    SET_GPR_U32(ctx, 31, 0x187760u);
    ctx->pc = 0x18775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187758u;
    // 0x18775c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1789E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1789E0u, 0x187758u, 0x187760u)) {
        return;
    }
    ctx->pc = 0x187760u;
label_187760:
    // 0x187760: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x187760u;
    {
        const bool branch_taken_0x187760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187760u;
        // 0x187764: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187760) {
            ctx->pc = 0x1877E4u;
            goto label_1877e4;
        }
    }
    ctx->pc = 0x187768u;
label_187768:
    // 0x187768: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x187768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18776c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187770: 0x24a58848  addiu       $a1, $a1, -0x77B8
    ctx->pc = 0x187770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936648));
    // 0x187774: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x187774u;
    SET_GPR_U32(ctx, 31, 0x18777Cu);
    ctx->pc = 0x187778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187774u;
    // 0x187778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x187774u, 0x18777Cu)) {
        return;
    }
    ctx->pc = 0x18777Cu;
label_18777c:
    // 0x18777c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x18777Cu;
    {
        const bool branch_taken_0x18777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18777Cu;
        // 0x187780: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18777c) {
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x187784u;
label_187784:
    // 0x187784: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x187784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x187788: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x187788u;
    {
        const bool branch_taken_0x187788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187788u;
        // 0x18778c: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187788) {
            ctx->pc = 0x1879BCu;
            goto label_1879bc;
        }
    }
    ctx->pc = 0x187790u;
    // 0x187790: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x187790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187794: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x187794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x187798: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x187798u;
    SET_GPR_U32(ctx, 31, 0x1877A0u);
    ctx->pc = 0x18779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187798u;
    // 0x18779c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x187798u, 0x1877A0u)) {
        return;
    }
    ctx->pc = 0x1877A0u;
label_1877a0:
    // 0x1877a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1877a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1877a4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1877a8: 0x8c44bd00  lw          $a0, -0x4300($v0)
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBD00u));
    // 0x1877ac: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1877acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1877b0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1877B0u;
    {
        const bool branch_taken_0x1877b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1877B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B0u;
        // 0x1877b4: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877b0) {
            ctx->pc = 0x1877D4u;
            goto label_1877d4;
        }
    }
    ctx->pc = 0x1877B8u;
    // 0x1877b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1877b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1877bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1877BCu;
    {
        const bool branch_taken_0x1877bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877BCu;
        // 0x1877c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877bc) {
            ctx->pc = 0x1877D8u;
            goto label_1877d8;
        }
    }
    ctx->pc = 0x1877C4u;
    // 0x1877c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1877c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1877c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1877c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877cc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1877CCu;
    SET_GPR_U32(ctx, 31, 0x1877D4u);
    ctx->pc = 0x1877D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877CCu;
    // 0x1877d0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1877CCu, 0x1877D4u)) {
        return;
    }
    ctx->pc = 0x1877D4u;
label_1877d4:
    // 0x1877d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1877d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1877d8:
    // 0x1877d8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1877d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1877dc: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1877dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_1877e0:
    // 0x1877e0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_1877e4:
    // 0x1877e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1877E4u;
    SET_GPR_U32(ctx, 31, 0x1877ECu);
    ctx->pc = 0x1877E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877E4u;
    // 0x1877e8: 0x26658878  addiu       $a1, $s3, -0x7788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1877E4u, 0x1877ECu)) {
        return;
    }
    ctx->pc = 0x1877ECu;
label_1877ec:
    // 0x1877ec: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1877ECu;
    {
        const bool branch_taken_0x1877ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877ECu;
        // 0x1877f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877ec) {
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x1877F4u;
label_1877f4:
    // 0x1877f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1877f8: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x1877f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6CBCF8u));
    // 0x1877fc: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1877FCu;
    {
        const bool branch_taken_0x1877fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x187800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877FCu;
        // 0x187800: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877fc) {
            ctx->pc = 0x1878D0u;
            goto label_1878d0;
        }
    }
    ctx->pc = 0x187804u;
    // 0x187804: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x187804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x187808: 0x5040006d  beql        $v0, $zero, . + 4 + (0x6D << 2)
    ctx->pc = 0x187808u;
    {
        const bool branch_taken_0x187808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187808) {
            ctx->pc = 0x18780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187808u;
            // 0x18780c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x187810u;
    // 0x187810: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x187810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x187814: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x187814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x187818: 0xc065c58  jal         func_197160
    ctx->pc = 0x187818u;
    SET_GPR_U32(ctx, 31, 0x187820u);
    ctx->pc = 0x18781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187818u;
    // 0x18781c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x187818u, 0x187820u)) {
        return;
    }
    ctx->pc = 0x187820u;
label_187820:
    // 0x187820: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x187820u;
    {
        const bool branch_taken_0x187820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187820u;
        // 0x187824: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187820) {
            ctx->pc = 0x1879BCu;
            goto label_1879bc;
        }
    }
    ctx->pc = 0x187828u;
    // 0x187828: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x187828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x18782c: 0x244588b8  addiu       $a1, $v0, -0x7748
    ctx->pc = 0x18782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936760));
    // 0x187830: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x187830u;
    {
        const bool branch_taken_0x187830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187830u;
        // 0x187834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187830) {
            ctx->pc = 0x18783Cu;
            goto label_18783c;
        }
    }
    ctx->pc = 0x187838u;
    // 0x187838: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x187838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18783c:
    // 0x18783c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187840: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x187840u;
    SET_GPR_U32(ctx, 31, 0x187848u);
    ctx->pc = 0x187844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187840u;
    // 0x187844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x187840u, 0x187848u)) {
        return;
    }
    ctx->pc = 0x187848u;
label_187848:
    // 0x187848: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x18784c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18784Cu;
    {
        const bool branch_taken_0x18784c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18784Cu;
        // 0x187850: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18784c) {
            ctx->pc = 0x187864u;
            goto label_187864;
        }
    }
    ctx->pc = 0x187854u;
    // 0x187854: 0xc0616e6  jal         func_185B98
    ctx->pc = 0x187854u;
    SET_GPR_U32(ctx, 31, 0x18785Cu);
    ctx->pc = 0x185B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185B98u, 0x187854u, 0x18785Cu)) {
        return;
    }
    ctx->pc = 0x18785Cu;
label_18785c:
    // 0x18785c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x18785cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x187860: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_187864:
    // 0x187864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187868: 0xac4486b8  sw          $a0, -0x7948($v0)
    ctx->pc = 0x187868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936248), GPR_U32(ctx, 4));
    // 0x18786c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x18786cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x187870: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x187870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x187874: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x187874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x187878: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187878u;
    {
        const bool branch_taken_0x187878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187878) {
            ctx->pc = 0x18787Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187878u;
            // 0x18787c: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18789Cu;
            goto label_18789c;
        }
    }
    ctx->pc = 0x187880u;
    // 0x187880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187884u;
    {
        const bool branch_taken_0x187884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187884u;
        // 0x187888: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187884) {
            ctx->pc = 0x187898u;
            goto label_187898;
        }
    }
    ctx->pc = 0x18788Cu;
    // 0x18788c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x187890: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x187890u;
    SET_GPR_U32(ctx, 31, 0x187898u);
    ctx->pc = 0x187894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187890u;
    // 0x187894: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x187890u, 0x187898u)) {
        return;
    }
    ctx->pc = 0x187898u;
label_187898:
    // 0x187898: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_18789c:
    // 0x18789c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x18789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1878a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1878A0u;
    {
        const bool branch_taken_0x1878a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878A0u;
        // 0x1878a4: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878a0) {
            ctx->pc = 0x1878BCu;
            goto label_1878bc;
        }
    }
    ctx->pc = 0x1878A8u;
    // 0x1878a8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1878a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1878ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1878acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878b0: 0x8c62870c  lw          $v0, -0x78F4($v1)
    ctx->pc = 0x1878b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1878b4: 0xc05e278  jal         func_1789E0
    ctx->pc = 0x1878B4u;
    SET_GPR_U32(ctx, 31, 0x1878BCu);
    ctx->pc = 0x1878B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878B4u;
    // 0x1878b8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1789E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1789E0u, 0x1878B4u, 0x1878BCu)) {
        return;
    }
    ctx->pc = 0x1878BCu;
label_1878bc:
    // 0x1878bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1878bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1878c0: 0xc0438e6  jal         func_10E398
    ctx->pc = 0x1878C0u;
    SET_GPR_U32(ctx, 31, 0x1878C8u);
    ctx->pc = 0x1878C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878C0u;
    // 0x1878c4: 0x8c4482f0  lw          $a0, -0x7D10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E398u, 0x1878C0u, 0x1878C8u)) {
        return;
    }
    ctx->pc = 0x1878C8u;
label_1878c8:
    // 0x1878c8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1878C8u;
    {
        const bool branch_taken_0x1878c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878C8u;
        // 0x1878cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878c8) {
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x1878D0u;
label_1878d0:
    // 0x1878d0: 0x8c43bd08  lw          $v1, -0x42F8($v0)
    ctx->pc = 0x1878d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950152)));
    // 0x1878d4: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1878D4u;
    {
        const bool branch_taken_0x1878d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1878D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878D4u;
        // 0x1878d8: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878d4) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x1878DCu;
    // 0x1878dc: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1878e0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1878E0u;
    {
        const bool branch_taken_0x1878e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E0u;
        // 0x1878e4: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878e0) {
            ctx->pc = 0x1879BCu;
            goto label_1879bc;
        }
    }
    ctx->pc = 0x1878E8u;
    // 0x1878e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1878e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1878ec: 0x24a588e0  addiu       $a1, $a1, -0x7720
    ctx->pc = 0x1878ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936800));
    // 0x1878f0: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x1878F0u;
    SET_GPR_U32(ctx, 31, 0x1878F8u);
    ctx->pc = 0x1878F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878F0u;
    // 0x1878f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x1878F0u, 0x1878F8u)) {
        return;
    }
    ctx->pc = 0x1878F8u;
label_1878f8:
    // 0x1878f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1878f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1878fc: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1878fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x187900: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187904: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x187904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x187908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18790c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18790Cu;
    SET_GPR_U32(ctx, 31, 0x187914u);
    ctx->pc = 0x187910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18790Cu;
    // 0x187910: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18790Cu, 0x187914u)) {
        return;
    }
    ctx->pc = 0x187914u;
label_187914:
    // 0x187914: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x187918: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x187918u;
    {
        const bool branch_taken_0x187918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187918u;
        // 0x18791c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187918) {
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x187920u;
    // 0x187920: 0xc0616e4  jal         func_185B90
    ctx->pc = 0x187920u;
    SET_GPR_U32(ctx, 31, 0x187928u);
    ctx->pc = 0x185B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185B90u, 0x187920u, 0x187928u)) {
        return;
    }
    ctx->pc = 0x187928u;
label_187928:
    // 0x187928: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x187928u;
    {
        const bool branch_taken_0x187928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187928u;
        // 0x18792c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187928) {
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x187930u;
label_187930:
    // 0x187930: 0x8c43bd10  lw          $v1, -0x42F0($v0)
    ctx->pc = 0x187930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950160)));
    // 0x187934: 0x54830022  bnel        $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x187934u;
    {
        const bool branch_taken_0x187934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187934) {
            ctx->pc = 0x187938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187934u;
            // 0x187938: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x18793Cu;
    // 0x18793c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x187940: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x187940u;
    {
        const bool branch_taken_0x187940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187940u;
        // 0x187944: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187940) {
            ctx->pc = 0x1879BCu;
            goto label_1879bc;
        }
    }
    ctx->pc = 0x187948u;
    // 0x187948: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x187948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x18794c: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x18794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x187950: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x187950u;
    {
        const bool branch_taken_0x187950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187950) {
            ctx->pc = 0x187954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187950u;
            // 0x187954: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x187958u;
    // 0x187958: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x187958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18795c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x18795Cu;
    {
        const bool branch_taken_0x18795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18795c) {
            ctx->pc = 0x187960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18795Cu;
            // 0x187960: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x187964u;
    // 0x187964: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x187964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x187968: 0x8c428a30  lw          $v0, -0x75D0($v0)
    ctx->pc = 0x187968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338A30u));
    // 0x18796c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18796Cu;
    {
        const bool branch_taken_0x18796c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18796Cu;
        // 0x187970: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18796c) {
            ctx->pc = 0x187978u;
            goto label_187978;
        }
    }
    ctx->pc = 0x187974u;
    // 0x187974: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x187974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_187978:
    // 0x187978: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x187978u;
    {
        const bool branch_taken_0x187978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187978u;
        // 0x18797c: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187978) {
            ctx->pc = 0x1879BCu;
            goto label_1879bc;
        }
    }
    ctx->pc = 0x187980u;
    // 0x187980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187984: 0x24a58908  addiu       $a1, $a1, -0x76F8
    ctx->pc = 0x187984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
    // 0x187988: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x187988u;
    SET_GPR_U32(ctx, 31, 0x187990u);
    ctx->pc = 0x18798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187988u;
    // 0x18798c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x187988u, 0x187990u)) {
        return;
    }
    ctx->pc = 0x187990u;
label_187990:
    // 0x187990: 0xae11006c  sw          $s1, 0x6C($s0)
    ctx->pc = 0x187990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
    // 0x187994: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x187994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x187998: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18799c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18799cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879a0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1879A0u;
    SET_GPR_U32(ctx, 31, 0x1879A8u);
    ctx->pc = 0x1879A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879A0u;
    // 0x1879a4: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1879A0u, 0x1879A8u)) {
        return;
    }
    ctx->pc = 0x1879A8u;
label_1879a8:
    // 0x1879a8: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1879ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1879ACu;
    {
        const bool branch_taken_0x1879ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879ACu;
        // 0x1879b0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879ac) {
            ctx->pc = 0x1879C0u;
            goto label_1879c0;
        }
    }
    ctx->pc = 0x1879B4u;
    // 0x1879b4: 0xc0616e4  jal         func_185B90
    ctx->pc = 0x1879B4u;
    SET_GPR_U32(ctx, 31, 0x1879BCu);
    ctx->pc = 0x185B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185B90u, 0x1879B4u, 0x1879BCu)) {
        return;
    }
    ctx->pc = 0x1879BCu;
label_1879bc:
    // 0x1879bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1879bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1879c0:
    // 0x1879c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1879c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1879c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1879c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1879c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1879c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1879cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1879ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1879d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1879D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1879D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879D0u;
        // 0x1879d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1879D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1879D8u;
}
