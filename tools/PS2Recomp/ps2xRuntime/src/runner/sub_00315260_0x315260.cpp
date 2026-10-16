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

// Function: sub_00315260
// Address: 0x315260 - 0x3155b0
void sub_00315260_0x315260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315260_0x315260");
#endif

    switch (ctx->pc) {
        case 0x3152b4u: goto label_3152b4;
        case 0x3152ccu: goto label_3152cc;
        case 0x315308u: goto label_315308;
        case 0x315344u: goto label_315344;
        case 0x3153a4u: goto label_3153a4;
        case 0x3153d8u: goto label_3153d8;
        default: break;
    }

    ctx->pc = 0x315260u;

    // 0x315260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x315260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x315264: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x315264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x315268: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x315268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31526c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x31526cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315270: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x315270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x315274: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x315274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315278: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x315278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31527c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31527cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315280: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x315280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x315284: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x315284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x315288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31528c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31528cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315290: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x315290u;
    {
        const bool branch_taken_0x315290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315290u;
        // 0x315294: 0xa5980b  movn        $s3, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315290) {
            ctx->pc = 0x3152A0u;
            goto label_3152a0;
        }
    }
    ctx->pc = 0x315298u;
    // 0x315298: 0x128000bc  beqz        $s4, . + 4 + (0xBC << 2)
    ctx->pc = 0x315298u;
    {
        const bool branch_taken_0x315298 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315298u;
        // 0x31529c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315298) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x3152A0u;
label_3152a0:
    // 0x3152a0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3152a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3152a4: 0x108000b1  beqz        $a0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x3152A4u;
    {
        const bool branch_taken_0x3152a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3152a4) {
            ctx->pc = 0x31556Cu;
            goto label_31556c;
        }
    }
    ctx->pc = 0x3152ACu;
    // 0x3152ac: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x3152ACu;
    SET_GPR_U32(ctx, 31, 0x3152B4u);
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x3152ACu, 0x3152B4u)) {
        return;
    }
    ctx->pc = 0x3152B4u;
label_3152b4:
    // 0x3152b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3152b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3152b8: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x3152B8u;
    {
        const bool branch_taken_0x3152b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152B8u;
        // 0x3152bc: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152b8) {
            ctx->pc = 0x31556Cu;
            goto label_31556c;
        }
    }
    ctx->pc = 0x3152C0u;
    // 0x3152c0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3152c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3152c4: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x3152C4u;
    SET_GPR_U32(ctx, 31, 0x3152CCu);
    ctx->pc = 0x3152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3152C4u;
    // 0x3152c8: 0x24a51760  addiu       $a1, $a1, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x3152C4u, 0x3152CCu)) {
        return;
    }
    ctx->pc = 0x3152CCu;
label_3152cc:
    // 0x3152cc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3152CCu;
    {
        const bool branch_taken_0x3152cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3152cc) {
            ctx->pc = 0x3152D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3152CCu;
            // 0x3152d0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315338u;
            goto label_315338;
        }
    }
    ctx->pc = 0x3152D4u;
    // 0x3152d4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3152d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3152d8: 0x120000ac  beqz        $s0, . + 4 + (0xAC << 2)
    ctx->pc = 0x3152D8u;
    {
        const bool branch_taken_0x3152d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152D8u;
        // 0x3152dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152d8) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x3152E0u;
    // 0x3152e0: 0x2462ff7f  addiu       $v0, $v1, -0x81
    ctx->pc = 0x3152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
    // 0x3152e4: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x3152e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x3152e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3152E8u;
    {
        const bool branch_taken_0x3152e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152E8u;
        // 0x3152ec: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152e8) {
            ctx->pc = 0x315300u;
            goto label_315300;
        }
    }
    ctx->pc = 0x3152F0u;
    // 0x3152f0: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x3152f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x3152f4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3152f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3152f8: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x3152F8u;
    {
        const bool branch_taken_0x3152f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152F8u;
        // 0x3152fc: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152f8) {
            ctx->pc = 0x31556Cu;
            goto label_31556c;
        }
    }
    ctx->pc = 0x315300u;
label_315300:
    // 0x315300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x315300u;
    {
        const bool branch_taken_0x315300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315300u;
        // 0x315304: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315300) {
            ctx->pc = 0x315310u;
            goto label_315310;
        }
    }
    ctx->pc = 0x315308u;
label_315308:
    // 0x315308: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x315308u;
    {
        const bool branch_taken_0x315308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315308u;
        // 0x31530c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315308) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x315310u;
label_315310:
    // 0x315310: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x315310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x315314: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x315314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x315318: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x315318u;
    {
        const bool branch_taken_0x315318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315318) {
            ctx->pc = 0x31531Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315318u;
            // 0x31531c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315380u;
            goto label_315380;
        }
    }
    ctx->pc = 0x315320u;
    // 0x315320: 0x2462ff80  addiu       $v0, $v1, -0x80
    ctx->pc = 0x315320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x315324: 0x2c42007d  sltiu       $v0, $v0, 0x7D
    ctx->pc = 0x315324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x315328: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x315328u;
    {
        const bool branch_taken_0x315328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315328) {
            ctx->pc = 0x31532Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315328u;
            // 0x31532c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315380u;
            goto label_315380;
        }
    }
    ctx->pc = 0x315330u;
    // 0x315330: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x315330u;
    {
        const bool branch_taken_0x315330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315330u;
        // 0x315334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315330) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x315338u;
label_315338:
    // 0x315338: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x315338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x31533c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x31533Cu;
    SET_GPR_U32(ctx, 31, 0x315344u);
    ctx->pc = 0x315340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31533Cu;
    // 0x315340: 0x24a51768  addiu       $a1, $a1, 0x1768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x31533Cu, 0x315344u)) {
        return;
    }
    ctx->pc = 0x315344u;
label_315344:
    // 0x315344: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x315344u;
    {
        const bool branch_taken_0x315344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315344) {
            ctx->pc = 0x315348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315344u;
            // 0x315348: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315398u;
            goto label_315398;
        }
    }
    ctx->pc = 0x31534Cu;
    // 0x31534c: 0x1200008e  beqz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x31534Cu;
    {
        const bool branch_taken_0x31534c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31534Cu;
        // 0x315350: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31534c) {
            ctx->pc = 0x315588u;
            goto label_315588;
        }
    }
    ctx->pc = 0x315354u;
    // 0x315354: 0x2442ff5f  addiu       $v0, $v0, -0xA1
    ctx->pc = 0x315354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967135));
    // 0x315358: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x315358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x31535c: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x31535Cu;
    {
        const bool branch_taken_0x31535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31535Cu;
        // 0x315360: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31535c) {
            ctx->pc = 0x31556Cu;
            goto label_31556c;
        }
    }
    ctx->pc = 0x315364u;
    // 0x315364: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x315364u;
    {
        const bool branch_taken_0x315364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315364u;
        // 0x315368: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315364) {
            ctx->pc = 0x315308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315308;
        }
    }
    ctx->pc = 0x31536Cu;
    // 0x31536c: 0x2462ff5f  addiu       $v0, $v1, -0xA1
    ctx->pc = 0x31536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
    // 0x315370: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x315370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x315374: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x315374u;
    {
        const bool branch_taken_0x315374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315374u;
        // 0x315378: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315374) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x31537Cu;
    // 0x31537c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x31537cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_315380:
    // 0x315380: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x315380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315384: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x315384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x315388: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x315388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x31538c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315390: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x315390u;
    {
        const bool branch_taken_0x315390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315390u;
        // 0x315394: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315390) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x315398u;
label_315398:
    // 0x315398: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x315398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x31539c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x31539Cu;
    SET_GPR_U32(ctx, 31, 0x3153A4u);
    ctx->pc = 0x3153A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31539Cu;
    // 0x3153a0: 0x24a51770  addiu       $a1, $a1, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x31539Cu, 0x3153A4u)) {
        return;
    }
    ctx->pc = 0x3153A4u;
label_3153a4:
    // 0x3153a4: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3153A4u;
    {
        const bool branch_taken_0x3153a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3153a4) {
            ctx->pc = 0x31556Cu;
            goto label_31556c;
        }
    }
    ctx->pc = 0x3153ACu;
    // 0x3153ac: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3153ACu;
    {
        const bool branch_taken_0x3153ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3153ac) {
            ctx->pc = 0x3153B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3153ACu;
            // 0x3153b0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3153C0u;
            goto label_3153c0;
        }
    }
    ctx->pc = 0x3153B4u;
    // 0x3153b4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3153b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3153b8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x3153B8u;
    {
        const bool branch_taken_0x3153b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3153BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153B8u;
        // 0x3153bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153b8) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x3153C0u;
label_3153c0:
    // 0x3153c0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x3153c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3153c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3153c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3153c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3153c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3153cc: 0x1280ffce  beqz        $s4, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3153CCu;
    {
        const bool branch_taken_0x3153cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3153D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153CCu;
        // 0x3153d0: 0x2480a  movz        $t1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153cc) {
            ctx->pc = 0x315308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315308;
        }
    }
    ctx->pc = 0x3153D4u;
    // 0x3153d4: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x3153d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3153d8:
    // 0x3153d8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3153d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3153dc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3153dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3153e0: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3153E0u;
    {
        const bool branch_taken_0x3153e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153E0u;
        // 0x3153e4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153e0) {
            ctx->pc = 0x315474u;
            goto label_315474;
        }
    }
    ctx->pc = 0x3153E8u;
    // 0x3153e8: 0x28820029  slti        $v0, $a0, 0x29
    ctx->pc = 0x3153e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3153ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3153ECu;
    {
        const bool branch_taken_0x3153ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153ECu;
        // 0x3153f0: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153ec) {
            ctx->pc = 0x315424u;
            goto label_315424;
        }
    }
    ctx->pc = 0x3153F4u;
    // 0x3153f4: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3153F4u;
    {
        const bool branch_taken_0x3153f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3153F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153F4u;
        // 0x3153f8: 0x2882001c  slti        $v0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153f4) {
            ctx->pc = 0x31545Cu;
            goto label_31545c;
        }
    }
    ctx->pc = 0x3153FCu;
    // 0x3153fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3153FCu;
    {
        const bool branch_taken_0x3153fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153FCu;
        // 0x315400: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153fc) {
            ctx->pc = 0x315414u;
            goto label_315414;
        }
    }
    ctx->pc = 0x315404u;
    // 0x315404: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x315404u;
    {
        const bool branch_taken_0x315404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x315408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315404u;
        // 0x315408: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315404) {
            ctx->pc = 0x31548Cu;
            goto label_31548c;
        }
    }
    ctx->pc = 0x31540Cu;
    // 0x31540c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31540Cu;
    {
        const bool branch_taken_0x31540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31540Cu;
        // 0x315410: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31540c) {
            ctx->pc = 0x315494u;
            goto label_315494;
        }
    }
    ctx->pc = 0x315414u;
label_315414:
    // 0x315414: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x315414u;
    {
        const bool branch_taken_0x315414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x315418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315414u;
        // 0x315418: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315414) {
            ctx->pc = 0x315464u;
            goto label_315464;
        }
    }
    ctx->pc = 0x31541Cu;
    // 0x31541c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x31541Cu;
    {
        const bool branch_taken_0x31541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31541Cu;
        // 0x315420: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31541c) {
            ctx->pc = 0x315494u;
            goto label_315494;
        }
    }
    ctx->pc = 0x315424u;
label_315424:
    // 0x315424: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x315424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x315428: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x315428u;
    {
        const bool branch_taken_0x315428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315428u;
        // 0x31542c: 0x28820043  slti        $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315428) {
            ctx->pc = 0x31547Cu;
            goto label_31547c;
        }
    }
    ctx->pc = 0x315430u;
    // 0x315430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x315430u;
    {
        const bool branch_taken_0x315430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315430u;
        // 0x315434: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315430) {
            ctx->pc = 0x315448u;
            goto label_315448;
        }
    }
    ctx->pc = 0x315438u;
    // 0x315438: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x315438u;
    {
        const bool branch_taken_0x315438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315438u;
        // 0x31543c: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315438) {
            ctx->pc = 0x31546Cu;
            goto label_31546c;
        }
    }
    ctx->pc = 0x315440u;
    // 0x315440: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x315440u;
    {
        const bool branch_taken_0x315440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315440u;
        // 0x315444: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315440) {
            ctx->pc = 0x315494u;
            goto label_315494;
        }
    }
    ctx->pc = 0x315448u;
label_315448:
    // 0x315448: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x315448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x31544c: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31544Cu;
    {
        const bool branch_taken_0x31544c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x315450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31544Cu;
        // 0x315450: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31544c) {
            ctx->pc = 0x315484u;
            goto label_315484;
        }
    }
    ctx->pc = 0x315454u;
    // 0x315454: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x315454u;
    {
        const bool branch_taken_0x315454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315454u;
        // 0x315458: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315454) {
            ctx->pc = 0x315494u;
            goto label_315494;
        }
    }
    ctx->pc = 0x31545Cu;
label_31545c:
    // 0x31545c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31545Cu;
    {
        const bool branch_taken_0x31545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31545Cu;
        // 0x315460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31545c) {
            ctx->pc = 0x3154A4u;
            goto label_3154a4;
        }
    }
    ctx->pc = 0x315464u;
label_315464:
    // 0x315464: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x315464u;
    {
        const bool branch_taken_0x315464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315464u;
        // 0x315468: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315464) {
            ctx->pc = 0x3154A4u;
            goto label_3154a4;
        }
    }
    ctx->pc = 0x31546Cu;
label_31546c:
    // 0x31546c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31546Cu;
    {
        const bool branch_taken_0x31546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31546Cu;
        // 0x315470: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31546c) {
            ctx->pc = 0x3154A4u;
            goto label_3154a4;
        }
    }
    ctx->pc = 0x315474u;
label_315474:
    // 0x315474: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x315474u;
    {
        const bool branch_taken_0x315474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315474u;
        // 0x315478: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315474) {
            ctx->pc = 0x3154A4u;
            goto label_3154a4;
        }
    }
    ctx->pc = 0x31547Cu;
label_31547c:
    // 0x31547c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31547Cu;
    {
        const bool branch_taken_0x31547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31547Cu;
        // 0x315480: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31547c) {
            ctx->pc = 0x3154A4u;
            goto label_3154a4;
        }
    }
    ctx->pc = 0x315484u;
label_315484:
    // 0x315484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x315484u;
    {
        const bool branch_taken_0x315484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315484u;
        // 0x315488: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315484) {
            ctx->pc = 0x3154A4u;
            goto label_3154a4;
        }
    }
    ctx->pc = 0x31548Cu;
label_31548c:
    // 0x31548c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31548Cu;
    {
        const bool branch_taken_0x31548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31548Cu;
        // 0x315490: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31548c) {
            ctx->pc = 0x3154A4u;
            goto label_3154a4;
        }
    }
    ctx->pc = 0x315494u;
label_315494:
    // 0x315494: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x315494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x315498: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x315498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31549c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3154a0: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x3154a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_3154a4:
    // 0x3154a4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3154a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3154a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3154a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3154ac: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x3154acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3154b0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3154b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3154b4: 0x24636e80  addiu       $v1, $v1, 0x6E80
    ctx->pc = 0x3154b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28288));
    // 0x3154b8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3154b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3154bc: 0x24426cd0  addiu       $v0, $v0, 0x6CD0
    ctx->pc = 0x3154bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27856));
    // 0x3154c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3154c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3154c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3154c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3154c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3154c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3154cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3154ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3154d0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x3154d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3154d4: 0x1040ff8c  beqz        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x3154D4u;
    {
        const bool branch_taken_0x3154d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3154D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154D4u;
        // 0x3154d8: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154d4) {
            ctx->pc = 0x315308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315308;
        }
    }
    ctx->pc = 0x3154DCu;
    // 0x3154dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3154dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3154e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3154e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3154e4: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x3154e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x3154e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3154e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3154ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3154ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3154f0: 0x800008  jr          $a0
    ctx->pc = 0x3154F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x315308u: goto label_315308;
            case 0x3154F8u: goto label_3154f8;
            case 0x315508u: goto label_315508;
            case 0x31551Cu: goto label_31551c;
            case 0x315528u: goto label_315528;
            case 0x315550u: goto label_315550;
            case 0x315554u: goto label_315554;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3154F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3154F8u;
label_3154f8:
    // 0x3154f8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3154f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3154fc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3154fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315500: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x315500u;
    {
        const bool branch_taken_0x315500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315500u;
        // 0x315504: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315500) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x315508u;
label_315508:
    // 0x315508: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x315508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x31550c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x31550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x315510: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x315510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x315514: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x315514u;
    {
        const bool branch_taken_0x315514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315514u;
        // 0x315518: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315514) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x31551Cu;
label_31551c:
    // 0x31551c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x31551cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x315520: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x315520u;
    {
        const bool branch_taken_0x315520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315520u;
        // 0x315524: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315520) {
            ctx->pc = 0x315538u;
            goto label_315538;
        }
    }
    ctx->pc = 0x315528u;
label_315528:
    // 0x315528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31552c: 0xf01023  subu        $v0, $a3, $s0
    ctx->pc = 0x31552cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x315530: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x315530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x315534: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x315534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_315538:
    // 0x315538: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x315538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31553c: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x31553cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x315540: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x315540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x315544: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x315544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x315548: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x315548u;
    {
        const bool branch_taken_0x315548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315548u;
        // 0x31554c: 0xa6640000  sh          $a0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315548) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x315550u;
label_315550:
    // 0x315550: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x315550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_315554:
    // 0x315554: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x315554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x315558: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x315558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x31555c: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x31555Cu;
    {
        const bool branch_taken_0x31555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31555Cu;
        // 0x315560: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31555c) {
            ctx->pc = 0x3153D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3153d8;
        }
    }
    ctx->pc = 0x315564u;
    // 0x315564: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x315564u;
    {
        const bool branch_taken_0x315564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315564u;
        // 0x315568: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315564) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x31556Cu;
label_31556c:
    // 0x31556c: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x31556Cu;
    {
        const bool branch_taken_0x31556c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31556c) {
            ctx->pc = 0x315570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31556Cu;
            // 0x315570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x315574u;
    // 0x315574: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x315574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x315578: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x315578u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31557c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x31557cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x315580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x315580u;
    {
        const bool branch_taken_0x315580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315580u;
        // 0x315584: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315580) {
            ctx->pc = 0x31558Cu;
            goto label_31558c;
        }
    }
    ctx->pc = 0x315588u;
label_315588:
    // 0x315588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31558c:
    // 0x31558c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31558cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x315590: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x315590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x315594: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x315594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315598: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31559c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31559cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3155a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3155a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3155a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3155A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3155A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155A4u;
        // 0x3155a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3155A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3155ACu;
    // 0x3155ac: 0x0  nop
    ctx->pc = 0x3155acu;
    // NOP
    ctx->pc = 0x3155b0u;
}
